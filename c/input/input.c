// Anda telah mempelajari yang printf() digunakan untuk mengeluarkan nilai dalam C.
// Untuk mendapatkan masukan pengguna atau user input, Anda dapat menggunakan scanf() fungsi

#include <stdio.h>

int main() {
    // Buat variabel integer yang akan menyimpan nomor yang kita dapatkan dari pengguna
    int myNum;

    // Minta pengguna untuk mengetikkan nomor
    printf("Type a number and press enter: \n"); 

    // Dapatkan dan simpan nomor yang diketik pengguna
    scanf("%d", &myNum);

    // Cetak nomor yang diketik pengguna
    printf("Your number is: %d", myNum);
    // Fungsi ini scanf()mengambil dua argumen: penentu format variabel ( %d dalam contoh di atas) dan operator referensi ( &myNum), yang menyimpan alamat memori variabel.

    return 0;
}