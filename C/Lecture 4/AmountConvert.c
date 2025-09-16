#include <stdio.h>

 int main(){

    int amount;

    printf("Enter a amount in indian ..");
     scanf("%d",&amount);
     char ch;
     printf("which you want to convert");
    scanf("%c",&ch);
    switch (ch)
     {
    case '$':
      printf("%f",(float)amount/87);
   break;
case 'Y':
        printf(amount/12);
        break;

    default:
        printf("hehehe");
        break;
    }
}

    