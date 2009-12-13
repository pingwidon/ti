#include <stdio.h>
int main() {
  int n;
  int i;
  int suma = 0;
  printf("Wpisz liczbe calkowita: ");
  scanf("%d", &n);

  if(n < 1)
    printf("Blad: Liczba n musi byc wieksza od 1\n");
  else
    {
      printf("Suma liczb pomiedzy 1 a %d:\n", n);
      for(i=1; i <= n; i++)
        suma += i;
      printf("%d\n", suma);
    }
    return 0;
}
