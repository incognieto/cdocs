/* --------------------------------------------------------- */ 
/* File Program : PTR3.CPP */ 
/* Contoh pengubahan isi suatu variabel melalui pointer */ 
/* Tujuan : Menggunakan type data pointer dan manipulasinya */ 
/* --------------------------------------------------------- */ 
#include <stdio.h> 

int main() { 
    float d, *pd;                       // Deklarasi variabel float d dan pointer float pd
    d = 54.5;                           // Memberikan nilai awal 54.5 pada variabel d
    printf("Isi d semula = %g\n", d);   // Menampilkan nilai awal variabel d
    pd = &d;                            // Memberikan alamat variabel d ke dalam pointer pd
    *pd = *pd + 10;                     // Mengubah isi variabel yang ditunjuk oleh pointer pd (menambah 10 pada nilai d)
    printf("Isi d kini = %g\n", d);     // Menampilkan nilai variabel d setelah diubah melalui pointer pd
    return 0;                           // Mengembalikan nilai 0
}

/* STUDI KASUS : */ 
/* - Eksekusi file program tersebut dan pahami maksud program ini */ 
/* - Komentari setiap baris program (maksud tiap pernyataan di tiap baris program ) */ 
/* - Tulis hasil pemahaman Anda pada kertas yang disediakan */ 