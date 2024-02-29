/* --------------------------------------------------------- */ 
/* File Program : PTR4.CPP */ 
/* Contoh pemakaian pointer */ 
/* --------------------------------------------------------- */ 
#include <stdio.h> 

int main() 
{ 
    int z, s, *pz, *ps;                     // Deklarasi variabel integer z, s dan pointer integer pz, ps
    z = 20;                                 // Memberikan nilai awal 20 pada variabel z
    s = 30;                                 // Memberikan nilai awal 30 pada variabel s
    pz = &z;                                // Memberikan alamat variabel z ke dalam pointer pz
    ps = &s;                                // Memberikan alamat variabel s ke dalam pointer ps
    *pz = *pz + *ps;                        // Mengubah nilai yang ditunjuk oleh pointer pz dengan menambahkan nilai yang ditunjuk oleh pointer ps
    printf("z = %d, s = %d\n", z , s);      // Menampilkan nilai variabel z dan s setelah perubahan nilai melalui pointer

    return 0;                               // Mengembalikan nilai 0 
}

/* STUDI KASUS : */ 
/* - Eksekusi file program tersebut dan pahami maksud program ini */ 
/* - Komentari setiap baris program (maksud tiap pernyataan di tiap baris program ) */ 
/* - Tulis hasil pemahaman Anda pada kertas yang disediakan */ 
