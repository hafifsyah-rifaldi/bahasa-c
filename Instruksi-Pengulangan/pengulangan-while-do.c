/*  FIle: pengulangan-while-do.c
    Penulis: Hafif
    Deskripsi : print "Saya senang" sebanyak 3 kali */

#include<stdio.h>
int main ()
{
    /* Kamus: */
    int i = 0, n;
   
    /* Algoritma */
    printf ("Masukkan nilai pengulangan n : \n");
    scanf ("%d", &n);
    while (i<n) { /* Program diulang selama nilai i<3} */
        printf ("saya senang belajar bahasa C \n");
        i++;
    }
return 0;
}