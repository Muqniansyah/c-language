// Jika Anda ingin menambahkan konten ke suatu berkas tanpa menghapus konten lama, Anda dapat menggunakan amode.
// Mode a ini menambahkan konten di akhir file.

#include <stdio.h>

int main() {
    FILE *fptr;

    // Buka file dalam mode penambahan
    fptr = fopen("write.txt", "a");

    // Tambahkan beberapa teks ke file
    fprintf(fptr, "\nHi everybody!");
    
    // Tutup berkasnya
    fclose(fptr);

    // Sama halnya dengan w mode; jika berkas tidak ada, mode a akan membuat berkas baru dengan konten yang "ditambahkan".

    return 0;
}
