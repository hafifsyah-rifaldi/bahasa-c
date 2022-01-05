/* File: constanta.c */
/* Penulis: Hafif */
/* Deskripsi : Mendefinisikan konstanta bertype int, float, char */
#include <stdio.h>
#define FALSE 0
#define NOL 0
#define SATU 1
#define pi 3.1415

int main()
{/* Kamus */
    const int maks=5;
    const float param =2.5;
    const char cc = 65 ;
    const char cA = 'A' ;
    const int ttl = 25 ; /* Aktivitas Kreatif */
    /* Algoritma */
    printf ("PI = %6.2f \n", pi);
    printf ("NOL = %d \n", NOL);
    printf ("SATU = %d \n", SATU);
    printf ("FALSE = %d \n", FALSE);
    printf ("maks = %d \n", maks);
    printf ("param = %f \n", param);
    printf ("cc = %c \n", cc);
    printf ("cA = %c \n", cA);
    printf ("3\n"); /*tanpa memakai nama, tidak disarankan*/
    
    printf ("ttl const sebelum= %d \n", ttl); // const hanya bersifat read-only
    //mengubah const dengan different variables and pointers
    int *ptr = &ttl; /* Aktivitas Kreatif */
    *ptr = 12 ;
    printf ("ttl const hasil= %d \n", ttl);

return 0;
}