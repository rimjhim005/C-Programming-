#include<stdio.h>

int main(){
     float num1,num2,sum,sub,mult,div;
     int mod,x;
     printf("Enter your two numbers\n");
     scanf("%f %f",&num1,&num2);
     printf("please enter 1 for summation\n Enter 2 for subtraction\n enter 3 for multiplication\n enter 4 for division\n enter 5 for modulus\n");
     scanf("%d",&x);
     switch(x){
        case 1:
        sum=num1+num2;
        printf("Your summation result is %f\n",sum);
        break;
        case 2:
        sub=num1-num2;
        printf("Your subtraction result is %f\n",sub);
        break;
        case 3:
        mult=num1*num2;
        printf("Your multiplication result is %f\n",mult);
        break;
        case 4:
        if(num2==0){
         printf("Error:division by zero is not allowed\n");
        }
        else{
        div=num1/num2;
        printf("your division result is=%.2f\n",div);
        }
        break;
        case 5:
        if((int)num2==0){
         printf("Error: Modulus by zero is not allowed\n");
        }
        else{
         mod=(int)num1%(int)num2;
         printf("your modulus result is=%d",mod);
        }
        break;
        default:
        printf("unknown operation\n");
     }

     return 0;
}