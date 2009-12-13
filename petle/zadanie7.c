#include <stdio.h>
int main() {
  int tablica[5];
  int dodatnie = 0;
  int i;

  printf("Wpisz 5 liczb calkowitych: ");
  scanf("%d %d %d %d %d", &tablica[0], &tablica[1], &tablica[2], &tablica[3], &tablica[4]);

  for(i=0;i<5;i++)
    {
      if(tablica[i] % 2 == 0)
        dodatnie++;
    }
  printf("Ilosc liczb dodatnich: %d\n", dodatnie);
    return 0;
}
