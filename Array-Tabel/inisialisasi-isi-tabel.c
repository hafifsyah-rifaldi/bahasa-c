/*  File: inisialisasi-isi-tabel.c
    Penulis: Hafif
    Deskripsi : Mendefinisikan array dan mengisi nilainya */
#include<stdio.h>
int main ()
{
    /* Kamus: */
    int Tab [5] = {1, 2, 3, 4, 5}; // Tab[0]=1; Tab[1]=2; . . . Tab[4]=5
    float TabX[3] = {1.5, 3.5E2, 9.99};
    char Tabchar[4] = {'1', '2', '@', 'Z'};

    int i; //untuk iterasi indeks tabel
    /* menuliskan isi Tab berderet ke kanan */
    for (i=0; i<5; i++){
        printf ("Tab[%d] = %d ; \n", i, Tab[i]);
    }
    printf ("\n");

    /* Latihan : Tuliskan nilai TabX dan TabChar */

    return 0; 
}