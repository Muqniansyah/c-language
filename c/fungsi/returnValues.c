// Kata void kunci yang digunakan pada contoh sebelumnya pada arrayParameter menunjukkan bahwa fungsi tersebut tidak boleh mengembalikan nilai.
// Jika Anda ingin fungsi tersebut mengembalikan nilai, Anda dapat menggunakan tipe data (seperti int atau float, dsb.) sebagai ganti void, dan menggunakan return kata kunci di dalam fungsi.

#include <stdio.h>

int myFunction(int x, int y) {
    return x + y;
}

int main() {
    printf("Hasilnya adalah: %d \n\n", myFunction(5, 3));

    // Anda juga dapat menyimpan hasilnya dalam variabel
    printf("contoh dapat menyimpan hasilnya dalam variabel \n");
    int result = myFunction(2, 3); 
    printf("Hasilnya adalah = %d", result);

    return 0;
}