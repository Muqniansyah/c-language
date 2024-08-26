// Dalam C, Anda dapat membuat, membuka, membaca, dan menulis ke file dengan mendeklarasikan penunjuk bertipe FILE, dan menggunakan fopen() fungsi

#include <stdio.h>

int main() {
    // FILE pada dasarnya adalah tipe data, dan kita perlu membuat variabel penunjuk untuk bekerja dengannya (fptr). Untuk saat ini, baris ini tidak penting. Itu hanya sesuatu yang Anda perlukan saat bekerja dengan file.
    FILE *fptr;

    // Buat file di komputer Anda (nama file.txt)
    // Untuk membuat berkas, Anda dapat menggunakan w mode di dalam fopen()fungsi.
    // Mode ini wdigunakan untuk menulis ke sebuah berkas. Namun , jika berkas tersebut tidak ada, mode ini akan membuatkan berkas untuk Anda
    fptr = fopen("filename.txt", "w");

    // Tutup berkasnya
    fclose(fptr);

    return 0;
}

/*
Jika Anda ingin membuat file di folder tertentu, cukup berikan jalur absolut. contoh :
fptr = fopen("C:\directoryname\filename.txt", "w");
*/