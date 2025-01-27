#include<stdio.h>

int main(){
     //.............vowel and consonant find by using switch case................
     char ch;
     printf("Enter your character\n");
     scanf("%c",&ch);
     switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("This letter is a vowel\n");
        break;
        default:
        printf("this is a consonant\n");
     }
        // case 'a':
        // printf("This letter is a vowel\n");
        // break;
        // case 'e':
        // printf("This letter is a vowel\n");
        // break;
        // case 'i':
        // printf("This letter is a vowel\n");
        // break;
        
     return 0;
}