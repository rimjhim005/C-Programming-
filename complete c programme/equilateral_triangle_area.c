#include<stdio.h>
#include<math.h>
int main(){
//Isosceles Triangle area 
    int a,b;
    float area; 
    printf("Enter the arm's length:\n");
    scanf("%d %d",&a,&b);
    area=(b/4)*sqrt((4*a*a)-(b*b));
    printf("Your equilateral Triangle area result is=%f",area);


// equilateral triangle area 
    //  int a;
    //  float area; 
    //  printf("Enter the arm length:\n");
    //  scanf("%d",&a);
    //  area=(sqrt(3)*a*a)/4;
    //  printf("Your equilateral Triangle area result is=%f",area);
     return 0;
}