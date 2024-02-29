/* --------------------------------------------------------- */ 
/* File Program : PTR1.CPP */ 
/* Contoh pemakaian pointer */ 
/* Tujuan : mengetahui panjang dan posisi variabel di memory */ 
/* --------------------------------------------------------- */ 

#include <stdio.h> 

int main() { 
    int x, y;                       // Deklarasi dua variabel integer, x dan y
    int *px;                        // Deklarasi variabel pointer px bertipe int
    x = 87;                         // Memberikan nilai 87 pada variabel

    y = *px;                        // Memberikan nilai yang ada di alamat yang ditunjuk oleh px ke dalam variabel y
    px = &x;                        // Memberikan alamat variabel x ke dalam pointer px
    
    printf("Alamat x = %p\n", &x);  // Menampilkan alamat dari variabel x
    printf("Isi px = %d\n", x);     // Menampilkan nilai dari variabel x
    printf("Nilai yang ditunjuk oleh px = %d\n", *px); // Menampilkan nilai yang ditunjuk oleh px
    printf("Nilai y = %d\n", y);    // Menampilkan nilai dari variabel y

    printf("Alamat y = %p\n", &y);  //untuk menampilkan Alamat variabel y

    return 0;                       // Mengembalikan nilai 0 untuk menandakan bahwa program telah berjalan dengan sukses
} 
