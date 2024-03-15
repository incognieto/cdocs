//----------------------------------------------------------------------------/
/* File : PTR21.cpp */
/* Deskripsi : contoh deklarasi list dan pemakaian makro */
/* Dibuat oleh : Tim Dosen SDP */
/* Tanggal : 13-09-2001 */
//----------------------------------------------------------------------------/
#include <stdlib.h>
#include <stdio.h>
//Definisi akses komponen type, standard kuliah Algoritma dan pemrograman/
#define info(P) (P)->info
#define next(P) (P)->next
#define Nil NULL
/* Definisi TYPE global (sebenarnya untuk soal ini tidak perlu global) */
/* Element list linier */

typedef int infotype;
typedef struct tElmtlist *address;
typedef struct tElmtlist
{
    infotype info;
    address next;
} ElmtList;

address First, Last, newNode, Curr, P, Q;

int cekJmlData()
{
    int JmlData = 0;
    if (First == NULL)
    {
        return JmlData;
    }

    Curr = First;
    while (Curr != NULL)
    {
        JmlData++;
        Curr = Curr->next;
    }
    return JmlData;
}

void createLinkedList(int nilaiInsert)
{
    First = (address)malloc(sizeof(ElmtList));
    if (First == NULL)
    {
        printf("alokasi memori gagal");
    }
    else
    {
        First->info = nilaiInsert;
        First->next = NULL;
        Last = First;
    }
}

void insertAwal(int nilaiInsert)
{
    if (cekJmlData() == 0)
    {
        createLinkedList(nilaiInsert);
    }
    else
    {
        newNode = (address)malloc(sizeof(ElmtList));
        if (newNode == NULL)
        {
            printf("alokasi memori gagal");
        }
        else
        {
            newNode->info = nilaiInsert;
            newNode->next = First;
            First = newNode;
        }
    }
}

void insertAkhir(int nilaiInsert)
{
    if (cekJmlData() == 0)
    {
        createLinkedList(nilaiInsert);
    }
    else
    {
        newNode = (address)malloc(sizeof(ElmtList));
        if (newNode == NULL)
        {
            printf("alokasi memori gagal");
        }
        else
        {
            newNode->info = nilaiInsert;
            newNode->next = NULL;
            Last->next = newNode;
            Last = newNode;
        }
    }
}

void insertTengah(int nilaiInsert, int posisiInsert)
{
    if (cekJmlData() == 0)
    {
        createLinkedList(nilaiInsert);
    }
    else
    {
        newNode = (address)malloc(sizeof(ElmtList));
        if (newNode == NULL)
        {
            printf("alokasi memori gagal");
        }
        else
        {
            Curr = First;
            int CurrPosition = 1;
            while (CurrPosition < posisiInsert - 1)
            {
                CurrPosition++;
                Curr = Curr->next;
            }
            newNode->info = nilaiInsert;
            newNode->next = Curr->next;
            Curr->next = newNode;
        }
    }
}

void printLinkedList()
{
    if (cekJmlData() == 0)
    {
        printf("tidak ada info");
    }
    else
    {
        Curr = First;
        while (Curr != NULL)
        {
            printf("%d ", Curr->info);
            Curr = Curr->next;
        }
    }
}

int main()
{
    /* Alokasi, insert as first elemen */
    P = (address)malloc(sizeof(ElmtList));
    info(P) = 10;
    next(P) = Nil;
    First = P;
    Last = P;

    /* Alokasi, insert as first elemen */
    Q = (address)malloc(sizeof(ElmtList));
    info(Q) = 20;
    next(Q) = Nil;
    next(Q) = First;
    First = Q;

    /* Alokasi, insert as first elemen */
    P = (address)malloc(sizeof(ElmtList));
    info(P) = 30;
    next(P) = Nil;
    next(P) = First;
    First = P;

    insertAwal(100);
    insertAkhir(200);
    insertTengah(300,3);

    printLinkedList();

    //printf("%d", Last->info);
    return 0;
}