#include<stdio.h>
#include<math.h>
int main(){
   int base,height;
    float area; 
    printf("Enter the triangel's base and height \n");
    scanf("%d %d",&base,&height);
    area=0.5*base*height; 
    printf("your area result is=%f",area);

    // this will be applicabel if given three arms lenght
    // int a,b,c,s;
    // float area;
    //  printf("Enter your three arms length\n");
    //  scanf("%d %d %d",&a,&b,&c);
    //  s=(a+b+c)/2;
    //  area=sqrt(s*(s-a)*(s-b)*(s-c));
    //  printf("Your area result is=%f",area);
     return 0;
}