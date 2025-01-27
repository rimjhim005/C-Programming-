#include<stdio.h>

int main(){
     float number;
     printf("Enter your number\n");
     scanf("%f",&number);
     if(number>0){
        printf("%.2f is a positive number\n",number);
     }
     else if(number==0){
        printf("Your entered zero\n");
     }
     else{
        printf("%.2f is a negative number\n",number);
     }
     return 0;
}