/*---------------------------------------------------------------------------*/
/* File : PTR20.cpp */
/* Deskripsi : contoh pendefinisian struct dan pointer ke struct */
/* Dibuat oleh : Tim Dosen SDP */
/* Tanggal : 13-09-2001 */
/*---------------------------------------------------------------------------*/
/*

    Nama        : Nieto Salim Maula
    Kelas       : 1A / D4 / Teknik Informatika / POLBAN
    NIM         : 231524019
    Diakses     : Jumat, 08 Maret 2024, kebutuhan pembelajaran mata kuliah SDA (Praktik)
    Semester    : 2 (Genap)

*/

#include<stdlib.h>
#include<stdio.h>

int main()
{
    /* kamus */
    /* cara 3 : INI yang membuat TYPE baru */
    typedef struct {
        float x;
        float y;
    } Point; /* nama type */

    Point *P2; /* deklarasi pointer ke struct */
    Point *P3 = (Point *) malloc (sizeof (Point)); /* deklarasi alokasi */

    /* program */
    /* Cara 1 : mengacu elemen pointer ke struct */
    printf("Titik P2, dengan P2->x dan P2->y : \n");
    P2 = (Point *) malloc (sizeof(Point)); /* Alokasi */
    P2->x = 9.12; /* Isi nilai komponen */
    P2->y = 2.567;
    printf("P2.x = %f \nP2.y = %f \n", P2->x, P2->y);
    /* Cara 2 : Perhatikanlah tanda kurung, lihat prioritas () dibuku TC */
    (*P3).x = 0.5; /* Mendefinisikan isi */
    (*P3).y = 10.5;
    printf("P3.x = %f \nP3.y = %f \n", (*P3).x, (*P3).y);
    return 0;
}

/* Hasil Pemahaman

Penggunaan Pointer ke Struct: Program ini menunjukkan dua cara berbeda untuk mengakses dan menggunakan pointer ke struct:
Cara 1: Menggunakan operator -> untuk mengakses member struct. Misalnya, P2->x digunakan untuk mengakses dan mengisi nilai pada member x dari struct yang ditunjuk oleh pointer P2.
Cara 2: Menggunakan operator . dan tanda kurung (). Misalnya, (*P3).x digunakan untuk mengakses dan mengisi nilai pada member x dari struct yang ditunjuk oleh pointer P3.

Fungsi malloc digunakan untuk mengalokasikan memori secara dinamis. Program ini menggunakan malloc untuk mengalokasikan memori untuk satu struct Point. Penting untuk mengingat bahwa memori yang dialokasikan dengan malloc harus di-dealokasikan menggunakan fungsi free setelah tidak diperlukan lagi.

(!!!) Penggunaan tanda -> dan . untuk mengakses member dari struct.

*/