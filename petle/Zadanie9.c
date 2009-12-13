#include <stdio.h> 
#include <stdlib.h> 
int main(int argc, char *argv[]) 
{ 
 FILE *in_handle; 
 char bufor[BUFSIZ]; 
 unsigned int ui, aui; 
 double x, y, zuzycie, sumaz, sumak; 
 double ax;
 aui = 0; ax = 0;
 in_handle = fopen(argv[1], "r"); 
 while (fgets(bufor, BUFSIZ, in_handle) != NULL) { 
   if(sscanf(bufor, "%u %lf %lf", &ui, &x, &y) == 3)
     {
    printf("--> %d %.2f %.2f\n", ui, x, y); 
     zuzycie = x/(ui/100.0);
     printf("Zuzycie paliwa na 100 km: %.2fl, koszt przejechania 100km: %.2fzÅ\n\n", zuzycie, zuzycie*y);
     ax += x;
     aui += ui;
     sumaz += zuzycie;
    sumak += zuzycie*y;
    }
 } 
fclose(in_handle); 
printf("Lacznie przejechanych: %dkm, ilosc zuzytego paliwa %.2fl\n", aui, ax);
 printf("Srednie zuzycie na 100km: %.2fl (na tankowanie: %.2fl), Sredni koszt przejechania 100km %.2fzÅ\n", ax/(aui/100.0), sumaz/4.0, sumak/4.0);
return EXIT_SUCCESS; 
}
