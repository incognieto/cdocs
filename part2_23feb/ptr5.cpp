/* --------------------------------------------------------------------------------------------- */
/* File Program : PTR5.CPP */
/* Deskripsi : pointer ke type dasar, mendeklarasikan & alokasi variabel dinamik */
/* --------------------------------------------------------------------------------------------- */

#include <stdlib.h>
#include <stdio.h>

int main() {
    /* Kamus Data (deklarasi, inisialisasi nilai variabel) */
    int i = 5, j;
    char c = 'X';
    
    // Alokasi memori untuk variabel integer dinamik menggunakan malloc
    int *Ptri = (int *) malloc(4);

    // Alokasi memori untuk variabel integer dinamik menggunakan malloc
    int *Ptrj = (int *) malloc(sizeof(int));

    // Alokasi memori untuk variabel float dinamik menggunakan malloc
    float *fx = (float *) malloc(sizeof(float));

    // Deklarasi array statis A
    int A[5];

    float f = 7.23;

    /* program */

    // Mengisi nilai ke variabel yang ditunjuk oleh Ptri, Ptrj, dan fx
    *Ptri = 8;
    *Ptrj = 0;
    *fx = 3;

    // Menampilkan informasi tentang variabel i
    printf("Alamat i = %x \n", &i);
    printf("Nilai i = %d \n", i);
    printf("Ukuran int = %d byte\n\n", sizeof(int));

    // Menampilkan informasi tentang variabel j
    printf("Alamat j = %x \n", &j);
    printf("Nilai j = %d \n", j);

    // Menampilkan informasi tentang variabel c
    printf("Alamat c = %x \n", &c);
    printf("Nilai c = %c \n", c);
    printf("Ukuran char = %d byte\n\n", sizeof(char));

    // Menampilkan informasi tentang pointer Ptri
    printf("Alamat Ptri = %x \n", &Ptri);
    printf("Isi var Ptri = %x \n", Ptri);
    printf("Nilai yang ditunjuk oleh Ptri = %d \n", *Ptri);
    printf("Ukuran pointer int = %d byte\n\n", sizeof(int *));

    // Menampilkan informasi tentang pointer Ptrj
    printf("Alamat Ptrj = %x \n", &Ptrj);
    printf("Isi var Ptrj = %x \n", Ptrj);
    printf("Nilai yang ditunjuk oleh Ptrj = %d \n", *Ptrj);

    // Mengganti Ptrj dengan nilai yang ditunjuk oleh Ptri
    Ptrj = Ptri;
    printf("Isi var Ptrj sekarang = %x \n", Ptrj);
    printf("Nilai yang ditunjuk oleh Ptrj sekarang = %d \n", *Ptrj);

    // Menampilkan informasi tentang array A
    printf("Alamat A = %x \n", &A);
    printf("Isi var A = %x \n", A[0]);
    printf("Ukuran array A = %d byte\n\n", sizeof(A));

    // Menampilkan informasi tentang variabel f
    printf("Alamat f = %x \n", &f);
    printf("Nilai f = %f \n", f);
    printf("Ukuran float = %d byte\n\n", sizeof(float));

    // Mengembalikan nilai 0 untuk menandakan bahwa program telah berjalan dengan sukses
    return 0;
}
