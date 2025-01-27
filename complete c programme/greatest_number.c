#include<stdio.h>

int main(){
//.......................largest number form positive integer ........................
float num1,num2;
printf("enter your two numbers\n");
scanf("%f %f",&num1, &num2);
if((num1>0)&&(num2>0)){
    if(num1>num2){
        printf("%.2f is the largest number\n",num1);
    }
    else{
        printf("%.2f is the largest number\n",num2);
    }
}
else{
    printf("Please input valid number\n");
}





//....................greatest value form three number values................
    // float num1, num2,num3; 
    //  printf("Enter your three numbers\n");
    //  scanf("%f %f %f",&num1,&num2,&num3);
    //  if((num1>num2)&&(num1>num3)){
    //     printf("%.2f is the largest number\n",num1);
    //  }
    //  else if((num1==num2)&&(num1==num3)){
    //     printf("given numbers are equal\n");
    //  }
    //  else if((num2>num1)&&(num2>num3)){
    //     printf("%.2f is the largest number\n",num2);
    //  }
    //  else{
    //     printf("%.2f is the largest number\n",num3);
    //  }





// .....................greatest number form two number values................
    //  float num1, num2; 
    //  printf("Enter your two numbers\n");
    //  scanf("%f %f",&num1,&num2);
    //  if(num1>num2){
    //     printf("%.2f is the largest number\n",num1);
    //  }
    //  else if(num1==num1){
    //     printf("Both numbers are equal\n");
    //  }
    //  else{
    //     printf("%.2f is the largest number\n",num2);
    // }
     return 0;
}