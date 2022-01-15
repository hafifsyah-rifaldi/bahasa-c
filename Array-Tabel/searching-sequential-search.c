/*  File: searching-sequential-search.c
    Penulis: Hafif
    Deskripsi: Menentukan posisi di mana elemen tabel bernilai X */

#include<stdio.h>
int main (){
    /* Kamus : */
    int i;
    int Tab[10]= {1, 50, 6, 200, 3, 100, 30, 8, 99, 100};
    int X=8 ;/* indek di mana Tab[max] bernilai maksimums */
    
    /* Algoritma sequential search paling sederhana */
    /* Program berhenti pada indeks I di mana nilai diketemukan */
    i=0;
    while ((Tab[i]!=X) && (i<9)){
        i++;
    } /* Tab[i] == X atau i ==9 */
    if ( Tab[1]==X){
        printf("Indeks ini bernilai X = %d", i );
    }

    else { printf("Nilai tidak  diketemukan" \n);
        /* code */
    }
    return 0;
    
}