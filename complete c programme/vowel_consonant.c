#include<stdio.h>

int main(){
     char ch;
     printf("Please input your letter\n");
     scanf("%c",&ch);
     if((ch=='a')|| (ch=='e')|| (ch=='i')|| (ch=='o')||(ch=='u')||(ch=='A')|| (ch=='E')|| (ch=='I')|| (ch=='O')||(ch=='U')){
        printf("Your entered letter is a vowel\n");
     }
     else{
        printf("Your entered letter is consonant\n");
     }
     return 0;
}