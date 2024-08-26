// Bila Anda tidak lagi membutuhkan blok memori, Anda harus mendealokasikannya. Dealokasi juga disebut sebagai "membebaskan" memori.
// Memori dinamis tetap dicadangkan hingga dialokasikan atau hingga program berakhir. 
// Setelah memori didelokasi, memori tersebut dapat digunakan oleh program lain atau bahkan dapat dialokasikan ke bagian lain program Anda.

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Untuk membatalkan alokasi memori, gunakan free() fungsi

    printf("Contoh kerja termasuk pemeriksaan kesalahan dan pembebasan \n");  
    int *ptr;
    ptr = malloc(sizeof(*ptr)); // Alokasikan memori untuk satu bilangan bulat

    // Jika memori tidak dapat dialokasikan, cetak pesan dan akhiri fungsi main()
    if (ptr == NULL) {
        printf("Tidak dapat mengalokasikan memori");
        return 1;
    }

    // Tetapkan nilai bilangan bulat
    *ptr = 20;

    // Cetak nilai integer
    printf("Nilai bilangan bulat: %d \n", *ptr);

    // Memori yang dialokasikan bebas
    free(ptr);

    // Atur penunjuk ke NULL untuk mencegahnya digunakan secara tidak sengaja
    ptr = NULL; 

    return 0;
}