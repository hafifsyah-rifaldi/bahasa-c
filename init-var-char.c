/* File: init-var-char.c */
/* Penulis : Hafif
/* Deskripsi : Program ini berisi contoh sederhana untuk mendefinisikan 
variabel bertype char (karakter)*/
#include<stdio.h>
int main()
{
    /* KAMUS */
    char c = 65; /* Inisialisasi nilai karakter dengan 65, kode huruf 'A' */
    char c1;
/* Algoritma */
/* Penulisan karakter sebagai huruf */
    printf ("Karakter = %c \n",c);
    c1 = 'Z'; /* Variabel c1 diisi dengan huruf 'Z' */
    printf("Karakter = %c \n", c1);

/* Penulisan karakter */
    printf ("Karakter dalam kode ASCII = %d \n", c);
    printf ("Karakter sebagai huruf = %c \n", c);
    printf ("Karakter dalam kode ASCII = %d \n", c1);
    printf ("Karakter sebagai huruf =%c \n, c1");

return 0;

}