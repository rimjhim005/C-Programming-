#include<stdio.h>

int main(){
    // fahrenheit to celsius convert 
    float celsius, fahrenheit;
     printf("enter your fahrenheit temparature value\n");
     scanf("%f",&fahrenheit);
     celsius=5*(fahrenheit-32)/9;
     printf("Fahrenheit temparature value is=%.2f",celsius);


//celsius to fahrenheit convert 
    //  float celsius, fahrenheit;
    //  printf("enter your celsius temparature value\n");
    //  scanf("%f",&celsius);
    //  fahrenheit=(9*celsius)/5+32;
    //  printf("Fahrenheit temparature value is=%.2f",fahrenheit);
     return 0;
}