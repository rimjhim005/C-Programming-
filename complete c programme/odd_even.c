#include<stdio.h>

int main(){
     int number;
     printf("Enter your number\n");
     scanf("%d",&number);
     if(number%2==0){
        printf("your number %d is an even number\n",number);
     }
     else{
        printf("your number %d is an odd number\n",number);
     }
     return 0;
}