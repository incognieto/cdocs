/* ----------------------------------------------------- */
/* File Program : PTR6.CPP */
/* Deskripsi : pointer yang menunjuk ke array */
/* ---------------------------------------------------- */
#include <stdio.h>

int main() {
    /* Kamus Data (deklarasi, inisialisasi nilai variabel) */
    static int tgl_lahir[] = {18, 6, 1989};  // Array tgl_lahir menyimpan tanggal lahir
    int *ptgl;  // Pointer ptgl untuk menunjuk elemen-elemen array tgl_lahir
    ptgl = tgl_lahir;  // Inisialisasi pointer ptgl dengan alamat awal array tgl_lahir

    // Menampilkan nilai yang ditunjuk oleh pointer ptgl
    printf("Nilai yang ditunjuk oleh ptgl = %d\n", *ptgl);

    // Menampilkan nilai dari elemen pertama array tgl_lahir
    printf("Nilai dari tgl_lahir[0] = %d\n", tgl_lahir[0]);

    return 0;
}


/* STUDI KASUS : */
/* Eksekusi dan pahami maksud program ini (tulis tujuan program ini) */
/* Modifikasi program tersebut agar bisa menampilkan seluruh elemen array tgl_lahir !*/