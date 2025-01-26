#include<stdio.h>

int main(){
   int num1,num2,sum, sub,mult, div,mod;
     printf("enter your two number =");
     scanf("%d %d",&num1,&num2);
     sum=num1+num2;
     sub=num1-num2; 
     mult=num1*num2; 
     div=num1/num2;
     mod=num1 % num2; 
     printf("your summation result is=%d\n",sum);
     printf("your substraction result is=%d\n",sub);
     printf("your multiplication result is=%d\n",mult);
     printf("your divide result is=%d\n",div);
     printf("your modulus result is=%d\n",mod);
     return 0;
}