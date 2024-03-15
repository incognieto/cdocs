/* ----------------------------------------------------------- */
/* File Program : PTR7.CPP */
/* (Pointer dan String bagian ke-1) */
/* Deskripsi : Pointer yang menunjuk ke data string */
/* ---------------------------------------------------------- */

#include <stdio.h>

int main() {
    /* Kamus Data (deklarasi, inisialisasi nilai variabel) */
    char *pkota = "BANDUNG";  // Pointer pkota menunjuk ke string "BANDUNG"
    puts(pkota);  // Menampilkan string yang ditunjuk oleh pointer pkota
    return 0;
}
/* STUDI KASUS : */
/* Apa perbedaan deklarasi variabel char *pkota='BANDUNG'; dengan char kota[]='BANDUNG' ? 
*/

