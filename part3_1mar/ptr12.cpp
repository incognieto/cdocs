/* ------------------------------------------------------------------------------------------------------------------ */
/* File : PTR12.cpp */
/* Deskripsi : Pointer ke function (Procedure dengan parameter input/output sebagai parameter) */
/* Melakukan offset terhadap tabel tergantung fungsi f */
/* ------------------------------------------------------------------------------------------------------------------ */

#include <stdio.h>

/* Kamus Global */
int N; /* ukuran efektif */

/* Prototype, fungsi yang diberikan sebagai parameter aktual */
void succ(int *i); /* suksessor, berupa procedure by ref */
void pred(int *i); /* predesessor */

/* Prosedur dengan parameter sebuah fungsi */
void geser(int *TT, void (*f)(int *));

/* Program Utama */
int main(){
    /* Kamus Lokal */
    int MyTab[10];
    int i;

    /* Program */
    N = 10;
    for (i = 0; i < N; i++){
        MyTab[i] = i;
    }

    printf("Isi tabel dalam main sebelum pemanggilan : \n");
    for (i = 0; i < N; i++){
        printf(" %d ", MyTab[i]);
    }
    printf("\n");

    /* Pakai geser dengan parameter succ */
    printf("Geser dengan succ \n");
    geser(MyTab, succ);
    printf(" dalam main \n");
    for (i = 0; i < N; i++){
        printf(" %d ", MyTab[i]);
    }
    printf("\n");

    /* Pakai geser dengan parameter pred */
    printf("Geser dengan pred \n");
    geser(MyTab, pred);
    printf(" dalam main setelah aplikasi pred \n");
    for (i = 0; i < N; i++){
        printf(" %d ", MyTab[i]);
    }
    printf("\n");

    return 0;
}

/* Body Function */

/* Fungsi succ: menambah nilai parameter i dengan 1 */
void succ(int *i){
    *i = *i + 1;
}

/* Fungsi pred: mengurangkan nilai parameter i dengan 1 */
void pred(int *i){
    *i = *i - 1;
}

/* Prosedur geser: melakukan operasi pada setiap elemen array dengan fungsi yang diberikan sebagai parameter */
void geser(int *TT, void (*f)(int *)){
    int i;
    printf(" dalam geser \n");
    for (i = 0; i < N; i++){
        f(&TT[i]);
        printf(" %d ", TT[i]);
    }
    printf("\n");
}
