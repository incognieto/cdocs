/* ------------------------------------------------------------------------------------------------------------------ */
/* File        : PTR13.cpp          */
/* Deskripsi   : Pointer ke function (Procedure dengan parameter input/output sebagai parameter) */
/*       Melakukan offset terhadap tabel tergantung fungsi f     */
/* ------------------------------------------------------------------------------------------------------------------ */
#include <stdio.h>
#include <stdlib.h>

/* Kamus Global */
int N; /* ukuran efektif */
enum MyType {
    bulat, karakter
};

/* Prototype, fungsi yang diberikan sebagai parameter aktual */
void succI(void *i);  /* suksessor, berupa procedure by ref */ //awalnya int
void predI(void *i);  /* predesessor */
void succC(void *c); /* suksessor, berupa procedure by ref */ //awalnnya char
void predC(void *c); /* predesessor */

/* print tabel yang belum ketahuan typenya */
void printtab(void *T, enum MyType Ty);

/* Prosedur dengan parameter sebuah fungsi */
void geser(int *TT, void (*f)(void *));

/* Program Utama */
int main()
{   /* kamus lokal */
    void *MyTabInt;
    void *MyTabC;
    int i;
    /* program */
    N = 10;
    MyTabInt = (int *)malloc(N * sizeof(int)); //memesan alamat
    MyTabC = (char *)malloc(N * sizeof(char));

    /*Problemnya pointer bertipe void tidak bisa langsung diassign dengan nilai / value
    contoh : *MyTabInt = 1;
    harusnya di casting dulu jadi :*/
    *(int* )MyTabInt = 1;
    for (i = 0; i < N; i++){    /*Problemnya : data bertipe void tidak dapat dilakukan operasi matematis
    Contoh 
    *(MyTabInt + i) = i;
    *(MyTabC + i = 'Z';)
    Harus di-casting terlebih dahulu*/
        *((int* )MyTabInt + i) = i;
        *((char* )MyTabC + i) = 'Z';
    }

    printf("Isi tabel dalam main sebelum pemanggilan : \n");
    printf("    Tabel integer \n");
    
    //Casting ke enum pada parameter ke 2
    printtab((int *)MyTabInt, (MyType)0);
    printf("    Tabel charakter \n");
    printtab((char *)MyTabC, (MyType)1);
    printf("\n");
    
    /* Pakai geser dengan parameter succ */
    printf("Geser dengan succ \n");
    
    /*Fungsi integer tidak dapat langsung di passing langsung jadi void
    geser((int *)MyTabInt, (int *)succI);
    geser((char *)MyTabC, (char *)succC);*/
    geser((int *)MyTabInt, succI);
    geser((int *)MyTabC, succC);
    printf(" dalam main \n");
    printf("    Tabel integer \n");
    printtab((int *)MyTabInt, (MyType)0);
    printf("    Tabel charakter \n");
    printtab((char *)MyTabC, (MyType)1);
    printf("\n");
    
    /* Pakai geser dengan parameter pred */
    printf("Geser dengan pred \n");
    geser((int *)MyTabInt, predI);
    geser((int *)MyTabC, predC);
    printf(" dalam main \n");
    printf("    Tabel integer \n");
    printtab((int *)MyTabInt, (MyType)0);
    printf("    Tabel charakter \n");
    printtab((char *)MyTabC, (MyType)1);
    printf("\n");
    
    return 0;
}

/* Body Function */
//void succI(int *i) <-- before
void succI(void *i){
    *(int*)i = *(int*)i + 1;
}

//void predI(int *i)
void predI(void *i){
    *(int*)i = *(int*)i - 1;
}

//void succC(char *c)
void succC(void *c){
    *(char *)c = *(char *)c + 1;
}

void predC(void *c){
    *(char *)c = *(char *)c - 1;
}

void geser(int *TT, void (*f)(void *)){
    int i;

    printf(" dalam geser \n");
    for (i = 0; i < N; i++)
    {
        f(&TT[i]);
        printf(" %d ", TT[i]);
    }
    printf("\n");
}
void printtab(void *T, enum MyType Ty){
    int i;
    for (i = 0; i < N; i++){
        switch (Ty)
        {
        case bulat:
            //konversi/casting void ke integer
            printf("%d ", *((int *)T + i));
            break;
        case karakter:
            //konversi/casting void ke char
            printf("%c ", *((char *)T + i));
            break;
        }
    }
}
