#include<stdio.h>
#include<math.h>
int main(){
// f(x)= X^4 +5X +3
     int X,fx;
     printf("Enter the value of X");
     scanf("%d",&X);
     fx=pow(X,4) +5*X+3;
     printf("your equation result is=%d",fx);
     return 0;
}