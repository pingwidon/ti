/*Program wylicza kolejne potęgi liczby dwa*/
#include <stdio.h>
int main() {
  int p=1;
  int i=0;
  while(p <= 2007)
    {
      printf("2 do %d = %d\n", i, p);
      i++;
      p*=2;
    }
    return 0;
}
