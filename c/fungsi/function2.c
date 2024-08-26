// Anda juga dapat menggunakan fungsi untuk memanggil fungsi lainnya

#include <stdio.h>

// membuat fungsi yang pertama
void fungsiDua() {
    printf("fungsi dua berhasil berjalan \n");
}

void fungsiSatu() {
    printf("fungsi satu berhasil berjalan \n");
    fungsiDua();  // memanggil fungsi yang kedua
}

int main() {
    fungsiSatu(); // memanggil fungsi yang pertama

    return 0;
}