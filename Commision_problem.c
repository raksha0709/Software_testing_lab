#include<stdio.h>
int main(){
    int locks,stocks,barrels,tlocks=0,tstocks=0,tbarrels=0;
    float lprice=45.0,sprice=30.0,bprice=25.0;
    int c1,c2,c3,temp;
    float sales=0,comm=0;
    printf("Enter the no of locks:");
    scanf("%d",&locks);
    while(locks!=-1){
        c1=(locks<=0&locks>70);
        printf("Enter the no of stocks and barrels:");
        scanf("%d%d",&stocks,&barrels);
        c2=(stocks<=0&&stocks>80);
        c3=(barrels<=0&&barrels>90);
        if(c1)
         printf("locks not in range\n");
        else{
            temp=locks+tlocks;
            if(temp>70)
             printf("New value of locks not in range 1--70\n");
            else 
             tlocks=temp;
        }
        printf("Total locks:%d",tlocks);
        if(c2)
         printf("sstocks not in range\n");
        else{
            temp=stocks+tstocks;
            if(temp>80)
             printf("New value of stocks not in range 1--80\n");
            else 
             tstocks=temp;
        }
        printf("Total stocks:%d\n",tstocks);
        if(c1)
         printf("barrels not in range\n");
        else{
            temp=barrels+tbarrels;
            if(temp>90)
             printf("New value of barrels not in range 1--90\n");
            else 
             tbarrels=temp;
        }
        printf("Total locks:%d",tlocks);
    printf("Enter the no of locks:");
    scanf("%d",&locks);
    }
    if(tlocks>0&&tstocks>0&&tbarrels>0){
        printf("Total locks=%d\t Total stocks=%d\t Total barrels=%d",tlocks,tstocks,tbarrels);
        sales=(tlocks*lprice)+(tstocks*sprice)+(tbarrels*bprice);
        printf("Total sales:%f\n",sales);
        if(sales>0){
            if(sales>1800){
                comm=0.10*1000.0;
                comm=comm+0.15*800.0;
                comm=comm+0.20*(sales-1800.0);
            }else if(sales>1000){
                comm=0.10*1000.0;
                comm=comm+0.15*(sales-1000.0);
            }else
             comm=0.10*(sales);
            printf("Total Commission:%f\n",comm);
        }
    }else
    printf("No sales\n");
    return 0;
}