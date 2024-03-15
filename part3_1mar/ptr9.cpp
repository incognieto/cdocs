/* -------------------------------------------------- */
/* File Program : PTR9.CPP */
/* Deskripsi : Pointer yang menunjuk pointer */
/* -------------------------------------------------- */

#include <stdio.h>

int main() {
    /* Kamus Data (deklarasi, inisialisasi nilai variabel) */
    int var_x = 273;
    int *ptr1;   /* ptr1 adalah pointer yang menunjuk ke objek bertipe integer */
    int **ptr2;  /* ptr2 adalah pointer yang menunjuk ke pointer yang menunjuk */
                 /* ke objek bertipe integer */
    
    /* Inisialisasi pointer */
    ptr1 = &var_x;
    ptr2 = &ptr1;
    
    /* Mengakses nilai var_x melalui ptr1 dan ptr2 */
    printf("Nilai var_x = %d\n", *ptr1);
    printf("Nilai var_x = %d\n", **ptr2);
    
    return 0;
}
