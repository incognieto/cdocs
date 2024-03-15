/*----------------------------------------------------------------------------*/
/* File
PTR21.cpp
/* Deskripsi   : contoh deklarasi list dan pemakaian makro
/* Dibuat oleh : Tim Dosen SDP
/* Tanggal     : 13-09-2001
*/
/*----------------------------------------------------------------------------*/
/*

    Nama        : Nieto Salim Maula
    Kelas       : 1A / D4 / Teknik Informatika / POLBAN
    NIM         : 231524019
    Diakses     : Jumat, 08 Maret 2024, kebutuhan pembelajaran mata kuliah SDA (Praktik)
    Semester    : 2 (Genap)

*/
#include <stdlib.h>
#include <stdio.h>

/*Definisi akses komponen type, standard kuliah Algoritma dan pemrograman*/
#define info(P) (P)->info
#define next(P) (P)->next
#define Nil NULL
    /* Definisi TYPE global (sebenarnya untuk soal ini tidak perlu global) */
    /* Element list linier */
    typedef int infotype;
typedef struct tElmtlist* address;
typedef struct tElmtlist
{
    infotype info;
    address next;
} ElmtList;

address First, Last;

//Modul Alokasi 
address Alokasi(int nilai) 
{
    address newNode = (address)malloc(sizeof(address));
    if (newNode == Nil){
        printf("Alokasi memori gagal.\n");
        exit(1);
    }
    info(newNode) = nilai;
    next(newNode) = Nil;
    return newNode;
} 

//Modul addFront
void addFront(int nilai)
{
    address newNode = Alokasi(nilai);
    newNode->next = First;
    First = newNode;
}

//Modul addRear
void addRear(int nilai)
{
    address newNode = Alokasi(nilai);
    if (First == Nil) {
        First = newNode;
        return;
    }
    address current = First;
    while (current->next != Nil)
    {
        current = current->next;
    }
    current->next = newNode;
    Last = current;
}

//Modul addBetween
void InsertTengah(int posisi, int nilai)
{
    if (posisi <= 0){
        addFront(nilai);
        return;
    }
    address current = First;
    printf("%d\n", First->info);
    for (int i = 1; i < posisi - 1; i++){
        if (current == Nil){
            printf("Posisi tidak valid.\n");
            return;
        }
        current = current->next;
    }
    address newNode = Alokasi(nilai);
    newNode->next = current->next;
    current->next = newNode;
}

void displayData() {
    address current = First;
    printf("Linked List: ");
    while (current != NULL) {
        printf("%d ", current->info);
        if (current->next != NULL) {
            printf("--> ");
        } else {
            printf("--> NULL");
        }
        current = current->next;
    }
    printf("\n");
}


/* Program Utama */
int main()
{
    /* kamus */
    address P, Q, F;
    
    /* program */
    /* Create list kosong */
    First = Nil;
    /* Alokasi, insert as first elemen */
    P = (address)malloc(sizeof(ElmtList));
    info(P) = 10;
    next(P) = Nil;
    First = P;
    
    /* Alokasi, insert as first elemen */
    Q = (address)malloc(sizeof(ElmtList));
    info(Q) = 20;
    next(Q) = Nil;
    next(Q) = First;
    First = Q;
    
    /*Alokasi, insert as first elemen*/
    P = (address)malloc(sizeof(ElmtList));
    info(P) = 30;
    next(P) = Nil;
    next(P) = First;
    First = P;

    //data test - dummy - input
    addRear(0);
    addFront(40);
    InsertTengah(5, 7);
    displayData();

    return 0;
}