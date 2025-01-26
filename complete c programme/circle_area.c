#include<stdio.h>
#include<math.h>
#define pi 3.1416
int main(){
    float radius, area; 
     printf("Enter the radius\n");
     scanf("%f",&radius);
     area=pi*pow(radius,2);
     //area= pi*radius*radius;
     printf("your area result is=%.2f",area);
     return 0;
}