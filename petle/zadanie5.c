#include <stdio.h>
int main() {
  int tablica[6];
  int i;
  printf("Wpisz 6 liczb calkowitych: ");
  scanf("%d %d %d %d %d %d", &tablica[0], &tablica[1], &tablica[2], &tablica[3], &tablica[4], &tablica[5]);

  printf("tablica od poczatku {");
  for(i=0;i<6;i++)
    printf(" %d", tablica[i]);
  printf(" }\n");

  printf("tablica od konca {");
  for(i=5; i>=0;i--)
    printf(" %d", tablica[i]);
  printf(" }\n");

    return 0;
}
