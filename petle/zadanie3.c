#include <stdio.h>
int main() {
  int a;
  int b;
  printf("Podaj dwie liczby calkowite\n");
  printf("Pierwsza liczba: ");
  scanf("%d", &a);
  printf("Druga liczba: ");
  scanf("%d", &b);

  if(a >= b)
    printf("Blad: Liczba b musi byc wieksza od a");
  else
    {
      printf("Liczby pomiedzy %d a %d:\n", a, b);
      for(a+=1; a < b; a++)
        printf("%d ", a);
 
   }
  printf("\n");
    return 0;
}
