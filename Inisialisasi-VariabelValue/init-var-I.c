/* File : assigni.c */
/* Penulis : Hafif */
/* Mengisi variabel i yang ber-type in dengan nilai 5 dan menuliskannya */
#include <stdio.h>

int main ()
{/* Kamus */
    int i;
    int j;

    /* Algoritma*/
    i=5; /* sekarang variabel i akan bernilai 5 */
    printf("Ini nilai i: %d \n", i);

    i=i+1; /* nilai i ditambah 1, hasilnya disimpan kembali di  i */
    printf ("Ini nilai akhir i : %d \n", i);

    j=10;
    printf("Ini nilai j:%d \n", j);

    j=j+i;
    printf("Ini nilai akhir j: %d \n", j);

    return 0;
}