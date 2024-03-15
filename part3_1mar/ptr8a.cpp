/* -------------------------------------------------------------------------------- */
/* File Program : PTR8a.CPP */
/* (Pointer dan String bagian ke-2) */
/* Deskripsi : Menukar isi dua buah string TANPA pemakaian pointer */
/* ------------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>
#define PANJANG 20
#define cetak printf

int main() {
    /* Kamus Data (deklarasi, inisialisasi nilai variabel) */
    char nama1[PANJANG] = "DEWI SARTIKA";
    char nama2[PANJANG] = "SULTAN HASANUDDIN";
    char namaX[PANJANG];
    
    puts("Nama semula : ");
    printf("Nama 1 --> %s\n", nama1);
    printf("Nama 2 --> %s\n", nama2);
    
    /* Pertukaran string tanpa menggunakan pointer */
    strcpy(namaX, nama1);  // Menyalin isi string nama1 ke dalam namaX
    strcpy(nama1, nama2);  // Menyalin isi string nama2 ke dalam nama1
    strcpy(nama2, namaX);  // Menyalin isi string namaX (nama1 awal) ke dalam nama2
    
    puts("Nama sekarang : ");
    cetak("Nama 1 --> %s\n", nama1);
    cetak("Nama 2 --> %s\n", nama2);
    
    return 0;
}
