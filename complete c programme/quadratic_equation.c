#include<stdio.h>
#include<math.h>
int main(){
     float a,b,c,root1,root2,discriminant,imagpart,realpart;
     printf("Enter three coefficients (a, b, and c) of the quadratic equation ax^2 + bx + c = 0:\n");
     scanf("%f %f %f",&a, &b, &c);
     discriminant=b*b-4*a*c;
     if(discriminant>0){
        root1=(-b + sqrt(discriminant))/(2*a);
        root2=(-b - sqrt(discriminant))/(2*a);
        printf("The roots are real and different\n");
        printf("root1=%.2f\n",root1);
        printf("root2=%.2f\n",root2);
     }
     else if(discriminant==0){
        root1= -b /(2*a);
        printf("The root is real and same\n");
        printf("Root = %.2f\n",root1);
     }
     else{
        realpart= -b /(2*a);
        imagpart= (sqrt(-discriminant))/(2*a);
        printf("The root are complex and different\n");
        printf("root1=%.2f + %.2f\n",realpart,imagpart);
        printf("root2= %.2f - %.2f\n",realpart,imagpart);
     }
     return 0;
}