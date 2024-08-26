#include <stdio.h>

// contoh menulis beberapa teks dan menambahkan beberapa teks
int main() {
    FILE *fptr;

    // Buka file dalam mode menulis
    fptr = fopen("latihan.txt", "w");

    // Tulis beberapa teks ke file
    fprintf(fptr, "Some text \n");

    // Tutup berkasnya
    fclose(fptr);

    FILE *fptr2;

    // Buka file dalam mode penambahan
    fptr2 = fopen("latihan.txt", "a");

    // Tambahkan beberapa teks ke file
    fprintf(fptr2, "\nHi everybody!");

    // Tutup berkasnya
    fclose(fptr2);
    
    return 0;
}
