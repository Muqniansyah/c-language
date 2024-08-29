// saat bekerja dengan string, kita sering menggunakan fgets() fungsi untuk membaca sebaris teks. 
// Perhatikan bahwa Anda harus menyertakan argumen berikut: nama variabel string, sizeof( string_name ), dan stdin

#include <stdio.h>

int main() {
    // Buat sebuah string
    char fullName[30];

    // Minta pengguna untuk memasukkan beberapa teks (nama lengkap)
    printf("Type your full name and press enter: \n");

    // Dapatkan teksnya
    fgets(fullName, sizeof(fullName), stdin);

    // Keluarkan teksnya
    printf("Hello %s", fullName);

    // Gunakan scanf() fungsi ini untuk mendapatkan satu kata sebagai input, dan gunakan fgets() untuk beberapa kata.
    
    return 0;
}
