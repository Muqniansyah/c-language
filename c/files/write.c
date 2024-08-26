// mode w berarti bahwa berkas dibuka untuk ditulis. Untuk memasukkan konten ke dalamnya, 
// Anda dapat menggunakan fprintf() fungsi dan menambahkan variabel penunjuk ( fptr dalam contoh kita) dan beberapa teks.

#include <stdio.h>

int main() {
    FILE *fptr;

    // Buka file dalam mode menulis
    fptr = fopen("write.txt", "w");

    // Tulis beberapa teks ke file
    fprintf(fptr, "Some text");

    // Tutup berkasnya
    fclose(fptr);

    // Jika Anda menulis ke berkas yang sudah ada, konten lama akan dihapus, dan konten baru akan dimasukkan. Hal ini penting untuk diketahui, karena Anda mungkin tidak sengaja menghapus konten yang sudah ada.
    
    return 0;
}
