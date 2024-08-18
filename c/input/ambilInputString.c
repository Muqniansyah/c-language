// Anda juga bisa mendapatkan string yang dimasukkan oleh pengguna

#include <stdio.h>

int main() {
    // Buat sebuah string
    char firstName[30];

    // Minta pengguna untuk memasukkan beberapa teks (nama)
    printf("Enter your first name and press enter: \n");

    // Dapatkan dan simpan teksnya
    scanf("%s", firstName);

    // Keluarkan teksnya
    printf("Hello %s", firstName);
    
    return 0;
}

/*
Saat bekerja dengan string di scanf(), Anda harus menentukan ukuran string/array 
(kami menggunakan angka yang sangat tinggi, 30 dalam contoh kami, 
tetapi setidaknya kami yakin ia akan menyimpan cukup karakter untuk nama depan), 
dan Anda tidak harus menggunakan operator referensi (&).

Namun, scanf()fungsi ini memiliki beberapa keterbatasan: ia menganggap spasi (whitespace, tab, dll.) sebagai karakter penutup, 
yang berarti ia hanya dapat menampilkan satu kata (bahkan jika Anda mengetik banyak kata).

Gunakan scanf() fungsi ini untuk mendapatkan satu kata sebagai input, dan gunakan fgets() untuk beberapa kata.
*/
