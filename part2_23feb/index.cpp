#include <stdio.h>

int main() {
    int x, y;    // Deklarasi dua variabel integer, x dan y
    int *px;     // Deklarasi variabel pointer px bertipe int

    x = 87;      // Memberikan nilai 87 pada variabel 
    px = &x;     // Inisialisasi pointer px dengan alamat variabel x

    y = *px;     // Memberikan nilai yang ada di alamat yang ditunjuk oleh px ke dalam variabel y
    printf("Alamat x = %p\n", &x); // Menampilkan alamat dari variabel x
    printf("Isi px = %d\n", *px); // Menampilkan nilai yang ditunjuk oleh px
    printf("Nilai y = %d\n", y); // Menampilkan nilai dari variabel y
    printf("Alamat y = %p\n", &y); // Menampilkan Alamat variabel y

    return 0; // Mengembalikan nilai 0 untuk menandakan bahwa program telah berjalan dengan sukses
}
