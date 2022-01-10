/*  File : Increment.c
    Penulis : Hafif
    Deskripsi : Efek dari operator ++ */

#include<stdio.h>
int main()
{
/* Kamus */
    int i, j ;

/* Program */
    i = 3;
    printf ("Nilai i : %d %d \n", i, i++);
    i = 3;
    printf("%d\n", ++i); /* sebelum dicetak, nilai i ditambah 1 */

/* Aktivitas kreatif */
    j = 5;
    printf ("Nilai j operator dekremen: %d %d \n", j, j--);
    j = 5;
    printf ("%d\n", --j);

return 0;

}