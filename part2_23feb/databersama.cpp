#include <stdio.h>
#include <string.h>

// Mendefinisikan struktur untuk Data_a
struct Data_a {
    char propinsi[20];
    char kota[20];
    int jmlwanita;
    int jmlpria;
};

// Mendefinisikan struktur untuk Data_b
struct Data_b {
    char propinsi[20];
    int Jmlkota;
    int jmlmayopria;
    int TotPenduduk;
};

int main() {
    // Membuka File_A untuk dibaca
    FILE *File_A, *File_B;
    struct Data_a dataA;
    struct Data_b dataB;
    char Var_prop[20];

    // Membuka File_A untuk dibaca
    File_A = fopen("File_A.txt", "r");
    if (File_A == NULL) {
        printf("Error opening File_A\n");
        return 1;
    }

    // Membuka File_B untuk ditulis
    File_B = fopen("File_B.txt", "w");
    if (File_B == NULL) {
        printf("Error opening File_B\n");
        fclose(File_A);
        return 1;
    }

    // Membaca rekaman pertama dari File_A
    fscanf(File_A, "%s %s %d %d", dataA.propinsi, dataA.kota, &dataA.jmlwanita, &dataA.jmlpria);
    strcpy(Var_prop, dataA.propinsi);

    while (!feof(File_A)) {
        int Jmlkota = 0;
        int jmlmayoritas = 0;

        // Inisialisasi variabel
        int TotPenduduk = 0;
        int mayopriaFlag = 0;

        // Memproses rekaman dengan propinsi yang sama
        while (!feof(File_A) && strcmp(Var_prop, dataA.propinsi) == 0) {
            // Memeriksa apakah jumlah wanita dan jumlah pria sama
            if (dataA.jmlwanita != dataA.jmlpria) {
                // Memeriksa apakah jmlwanita kurang dari jmlpria
                if (dataA.jmlwanita < dataA.jmlpria) {
                    jmlmayoritas += 1;
                    mayopriaFlag = 1;
                }
                else {
                    mayopriaFlag = 0;
                }

                TotPenduduk += dataA.jmlwanita + dataA.jmlpria;
                Jmlkota += 1;
            }

            // Membaca rekaman selanjutnya dari File_A
            fscanf(File_A, "%s %s %d %d", dataA.propinsi, dataA.kota, &dataA.jmlwanita, &dataA.jmlpria);
        }

        // Menambahkan jumlah penduduk dari kota terakhir jika mayoritas penduduk pria
        if (mayopriaFlag) {
            TotPenduduk += dataA.jmlwanita + dataA.jmlpria;
            Jmlkota += 1;
        }

        // Menulis hasil ke File_B
        fprintf(File_B, "%s %d %d %d\n", Var_prop, Jmlkota, jmlmayoritas, TotPenduduk);

        // Memperbarui Var_prop dengan propinsi yang baru
        strcpy(Var_prop, dataA.propinsi);
    }

    // Menutup file
    fclose(File_A);
    fclose(File_B);

    return 0;
}
