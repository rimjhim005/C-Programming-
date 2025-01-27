#include<stdio.h>

int main(){
//....................greatest value form three number values................
    float num1, num2,num3; 
     printf("Enter your three numbers\n");
     scanf("%f %f %f",&num1,&num2,&num3);
     if((num1<num2)&&(num1<num3)){
        printf("%.2f is the smallest number\n",num1);
     }
     else if((num1==num2)&&(num1==num3)){
        printf("given numbers are equal\n");
     }
     else if((num2<num1)&&(num2<num3)){
        printf("%.2f is the smallest number\n",num2);
     }
     else{
        printf("%.2f is the smallest number\n",num3);
     }





// .....................smallest number form two number values................
    //  float num1, num2; 
    //  printf("Enter your two numbers\n");
    //  scanf("%f %f",&num1,&num2);
    //  if(num1>num2){
    //     printf("%.2f is the smallest number\n",num2);
    //  }
    //  else if(num1==num1){
    //     printf("Both numbers are equal\n");
    //  }
    //  else{
    //     printf("%.2f is the smallest number\n",num1);
    //  }
     return 0;
}