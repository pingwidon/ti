#include <stdio.h>
int main() {
  int tablica[7];
  int i;
  int najwieksza;
  int najmniejsza;
  printf("Wpisz 7 liczb calkowitych: ");
  scanf("%d %d %d %d %d %d %d", &tablica[0], &tablica[1], &tablica[2], &tablica[3], &tablica[4], &tablica[5], &tablica[6]);

  najwieksza = tablica[0];
  najmniejsza = tablica[0];

  for(i=1;i<7;i++)
    {
      if(tablica[i] > najwieksza)
        najwieksza = tablica[i];
      if(tablica[i] < najmniejsza)
        najmniejsza = tablica[i];
    }
  printf("Najwieksza liczba to: %d\nNajmniejsza liczba to: %d\n", najwieksza, najmniejsza);
    return 0;
}

