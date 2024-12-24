#include<stdio.h>
int check(int day,int month){
    if((month==4||month==6||month==9||month==11)&&day==31)
     return 1;
    else 
     return 0;
}
int isleap(int year){
    if(((year%4==0)&&(year%100!=0))||(year%400==0))
     return 1;
     else 
      return 0;
}
int main(){
    int day,month,year,tday,tmonth,tyear;
    char ch;
    do{
        ch='y';
        printf("Enter the current day month year as(ddmmyy):");
        scanf("%d %d %d",&day,&month,&year);
        tmonth=month;
        tyear=year;
        if(day<1||day>31){
            printf("day value not in range 1--31\n");
            ch='n';
        }
        if(month<1||month>12){
            printf("month value not in range1--12\n");
            ch='n';
        }
        else if(check(day,month)){
            printf("Not in range <=30\n");
            ch='n';
        }
        if(year<1812||year>2018){
            printf("Year vale not in range 1812--2019\n");
            ch='n';
        }
        if(month==2){
            if(isleap(year) && day>29){
                printf("invalid for leap yr\n");
                ch=='n';
            }else if(!isleap(year) && day>28){
                printf("invalid for not a leap yr\n");
                ch=='n';
            }
        }
    }while(ch=='n');
    
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
      if(day<31)
       tday=day+1;
      else{
        tday=1;
        tmonth=month+1;
      }
      break;
    case 4:
    case 6:
    case 9:
    case 11:
        if(day<30)
       tday=day+1;
      else{
        tday=1;
        tmonth=month+1;
      }
      break;
    case 12:
     if(day<31)
      tday=day+1;
     else{
        tday=1;
        tmonth=1;
        if(year==2018)
         printf("Next year not in range\n");
        else
         tyear=year+1;
     }
     break;
    case 2:
      if(day<28)
       tday=day+1;
      else if(isleap(year)&& day==28)
       tday=day+1;
       else if(day==28||day==29) {
        tday=1;
        tmonth=3;
       }
       break;
    }
    printf("Next date:%d/%d/%d",tday,tmonth,tyear);
    return 0;
}
