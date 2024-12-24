#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,c;
    printf("Enter three sides of triangle:");
    scanf("%d%d%d",&a,&b,&c);
    if((a<1||a>10)||(b<1||b>10)||(c<1||c>10)){
        printf("Not in range\n");
        exit(0);
    }
    if((a<b+c)&&(b<a+c)&&(c<a+b)){
        if((a==b)&&(b==c))
         printf("Equilateral Triangle\n");
        else if((a!=b)&&(b!=c)&&(a!=c))
         printf("Scalene Triangle\n");
        else
         printf("Isosceles Triangle\n");
    }else
     printf("Triangle cannot be formed");
     return 0;
}