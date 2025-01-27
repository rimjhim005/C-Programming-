#include<stdio.h>

int main(){
    int year,a,b,c;
    printf("enter a year\n");
    scanf("%d",&year);
    a=year%4;
    b=year%100;
    c=year%400;
    if((a==0)&&(b!=0)||(c==0)){
        printf("%d is a leap year\n",year);
    }
    else{
        printf("%d is not a leap year\n",year);
    }
    return 0;
}