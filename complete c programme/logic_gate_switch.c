#include<stdio.h>

int main(){
     int choice,a,b,and,or,not,nand,nor,xor,xnor;
     printf(" 1: OR gate\n 2: AND gate\n 3: NOT gate\n 4: NAND gate\n 5: NOR gate\n 6: XOR gate\n 7: XNOR gate\n 8: Exit\n\n");
     printf("Enter your choice (1 to 7) for above list\n");
     scanf("%d",&choice);
     switch(choice){
          case 1: 
          printf("................for OR gate..............\n");
          printf("Enter your two numbers (0 or 1 only)\n");
          scanf("%d %d",&a,&b);
          or=a|| b;
          printf("OR gate output is=%d",or);
          break;
          case 2: 
          printf("................for AND gate..............\n");
          printf("Enter your two numbers (0 or 1 only)\n");
          scanf("%d %d",&a,&b);
          and =a && b;
          printf("AND gate output is=%d",and);
          break;
          case 3:
          printf("................for NOT gate..............\n");
          printf("Enter your number (0 or 1 only)\n");
          scanf("%d",&a);
          not =!a;
          printf("NOT gate output is=%d",not);
          break;
          case 4:
          printf("................for NAND gate..............\n");
          printf("Enter your two numbers (0 or 1 only)\n");
          scanf("%d %d",&a,&b);
          nand =!(a&&b);
          printf("NAND gate output is=%d",nand);
          break;
          case 5:
          printf("................for NOR gate..............\n");
          printf("Enter your two numbers (0 or 1 only)\n");
          scanf("%d %d",&a,&b);
          nor=!(a|| b);
          printf("NOR gate output is=%d",nor);
          break;
          case 6:
          printf("................for XOR gate..............\n");
          printf("Enter your two numbers (0 or 1 only)\n");
          scanf("%d %d",&a,&b);
          xor=a^b;
          printf("XOR gate output is=%d",xor);
          break;
          case 7:
          printf("................for XNOR gate..............\n");
          printf("Enter your two numbers (0 or 1 only)\n");
          scanf("%d %d",&a,&b);
          xnor=!(a^b);
          printf("XNOR gate output is=%d",xnor);
          break;
          case 8:
          break;
     //      default:
     //      printf("Unknown Operation\n");
      }
     return 0;
}