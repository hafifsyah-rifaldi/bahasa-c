/*  File: instruksi-if-elseif.c
    Penulis: Hafif
    Deskripsi: Contoh pemakaian IF tiga kasus
    Membaca sebuah nilai,
    menuliskan  'Nilai a positif, nilai a', jika a > 0
                'Nilai Nol, nilai a', jika a = 0 
                'Nilai a negatif, nilai a', jika a < 0 */

#include<stdio.h>
int main()
{
    /* Kamus */
    int kode_hari;
    char kode_bulan;
    /* Program */
    printf ("Contoh IF tiga kasus \n");
    printf ("Kode Hari (0=Minggu; 1=Senin; 2=Selasa; 3=Rabu; 4=Kamis; 5=Jumat; 6=Sabtu)\n");
    printf ("Ketikkan suatu nilai integer Kode_Hari: ");
    scanf ("%d", &kode_hari);
    if (kode_hari==0)
    {
        printf ("Minggu \n");
    }
    
    else if (kode_hari==1)
    {
        printf ("Senin \n");
    }

    else if (kode_hari==2)
    {
        printf ("Selasa \n");
    }

    else if (kode_hari==3)
    {
        printf ("Rabu \n");
    }

    else if (kode_hari==4)
    {
        printf ("Kamis \n");
    }

    else if (kode_hari==5)
    {
        printf ("Jumat \n");
    }

    else if (kode_hari==6)
    {
        printf ("Sabtu \n");
    }

    else
    {
        printf ("Kode Hari SALAH! %d \n", kode_hari);
    }

    printf ("Kode Bulan (1=Januari; 2=Februari; 3=Maret; 4=April; 5=Mei; 6=Juni; 7=Juli; 8=Agustus; 9=September; 10=Oktober; 11=November; 12=Desember)\n");
    printf ("Ketikkan suatu nilai Kode_Bulan: ");
    scanf ("%d", &kode_bulan);

    if (kode_bulan==1)
    {
        printf ("Januari \n");
    }
    else if(kode_bulan==2)
    {
        printf ("Februari \n");
    }

    else if(kode_bulan==3)
    {
        printf ("Maret \n");
    }

    else if(kode_bulan==4)
    {
        printf ("April \n");
    }

    else if(kode_bulan==5)
    {
        printf ("Mei \n");
    }

    else if(kode_bulan==6)
    {
        printf ("Juni \n");
    }

    else if(kode_bulan==7)
    {
        printf ("Juli \n");
    }

    else if(kode_bulan==8)
    {
        printf ("Agustus \n");
    }
    
    else if(kode_bulan==9)
    {
        printf ("September \n");
    }

    else if(kode_bulan==10)
    {
        printf ("Oktober \n");
    }

    else if(kode_bulan==11)
    {
        printf ("November \n");
    }

    else if(kode_bulan==12)
    {
        printf ("Desember \n");
    }

    else
    {
        printf ("Kode Bulan SALAH! %d \n", kode_bulan);
    }

return 0;

}