/* --------------------------------------------------------- */ 
/* File Program : PTR2.CPP */ 
/* Contoh pemakaian pointer yang salah */ 
/* Tujuan : mengetahui panjang dan posisi variabel di memory */ 
/* --------------------------------------------------------- */ 
#include <stdio.h> 

int main() 
{ 
    float *pu;                  // Deklarasi pointer float tanpa inisialisasi
    float nu;                   // Deklarasi variabel float
    
    //int u = 1234;                Deklarasi variabel int dan memberikan nilai 1234
    float u = 1234;             // Mengubah tipe data var u ==> float
    
    pu = &u;                    // Memberikan alamat variabel u ke dalam pointer pu (penugasan yang salah)
    nu = *pu;                   // Mengambil nilai dari alamat yang ditunjuk oleh pu dan menetapkannya ke dalam variabel nu
    printf("u = %d\n", u);      // Menampilkan nilai variabel u (tipe data seharusnya float)
    printf("nu = %f\n", nu);    // Menampilkan nilai variabel nu (harusnya float, tapi tipe datanya diatur sebagai %f)

    return 0;     // Mengembalikan nilai 0
}

/* STUDI KASUS : */ 
/* - Eksekusi file program tersebut dan pahami maksud program ini */ 
/* - Komentari setiap baris program (maksud tiap pernyataan di tiap baris program ) */ 
/* - Tulis hasil pemahaman Anda pada kertas yang disediakan */ 
