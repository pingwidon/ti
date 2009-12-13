#include <stdio.h>

int main() {
  int i,j;

  printf("Pierwszy wzor:\n");
  for(i=1; i<=4; i++)
    {
      for(j=1;j<=i;j++)
     putchar('*');
     printf("\n");
    }

  printf("\nDrugi wzor:\n");
    for(i=1; i<=4; i++)
      {
    for(j=5-i;j>0;j--) //od 4 do 1
      putchar('*');
    printf("\n");
      }

    printf("\nTrzeci wzor:\n");
    for(i=1; i<=4; i++)
      {
    for(j=i-1;j>0;j--)
      putchar(' ');
        for(j=5-i;j>0;j--) //od 4 do 1
          putchar('*');
        printf("\n");
      }

    printf("\nCzwarty wzor:\n");
    for(i=1; i<=4; i++)
      {
        for(j=4-i;j>0;j--)
          putchar(' ');
        for(j=i;j>0;j--) //od 4 do 1                                                                                                                       
          putchar('*');
        printf("\n");
      }

    printf("\nWszystkie zbiory za pomoca petli zagniezdzonych:\n");
    for(i=1; i<=4; i++)
      {
    for(j=1;j<=i;j++)
      putchar('*');
    printf("\t");
        for(j=5-i;j>0;j--) //od 4 do 1                                                                             
          putchar('*');
    printf("\t");
    for(j=i-1;j>0;j--)
          putchar(' ');
    for(j=5-i;j>0;j--) //od 4 do 1                                                                                                                     
          putchar('*');
    printf("\t");
        for(j=4-i;j>0;j--)
          putchar(' ');
        for(j=i;j>0;j--) //od 4 do 1                                                                                         
      putchar('*');
    printf("\n");
      }

  return 0;
}

