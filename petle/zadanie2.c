#include <stdio.h>
int main() {
  int p;
  int i=0;
  for(p=0; p<8; p++)
    {
      if(i % 2)
        printf(" ");

      printf("* * * * * * * *\n");
      i++;
    }
    return 0;
}
