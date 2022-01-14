/*  File: pengulangan-for.c
    Penulis: Hafif
    Deskripsi : print "Saya Senang" sebanyak 3 kali */
#include<stdio.h>
int main ()
{
    /* Kamus : */
    int i, n;
    /* Algoritma */
    printf("Masukkan nilai perulangan n: ");
    scanf("%d", &n);
    for (i=0; i<n; ++i){
        printf ("Saya senang belajar bahasa C %d \n", i);
    }
    return 0;

}