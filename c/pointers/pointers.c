// Pointer adalah variabel yang menyimpan alamat memori variabel lain sebagai nilainya. Variabel pointer menunjuk ke tipe data (seperti int) dengan tipe yang sama, dan dibuat dengan * operator.
// Alamat variabel yang sedang Anda kerjakan ditetapkan ke pointer

#include <stdio.h>

int main() {
    int myAge = 43;  // Variabel int
    int* ptr = &myAge;  // Variabel penunjuk, dengan nama ptr, yang menyimpan alamat myAge

    // Keluarkan nilai myAge (43)
    printf("%d \n", myAge);

    // Keluarkan alamat memori myAge (0x7ffe5367e044)
    printf("%p \n", &myAge);

    // Keluarkan alamat memori myAge dengan pointer (0x7ffe5367e044)
    printf("%p \n", ptr);

    return 0;
}

/*
penjelasan :
Buat variabel penunjuk dengan nama ptr, yang menunjuk ke suatu intvariabel ( myAge). Perhatikan bahwa tipe penunjuk harus sesuai dengan tipe variabel yang Anda gunakan ( intdalam contoh kita).
Gunakan & operator untuk menyimpan alamat memori variabel myAge dan tetapkan ke pointer. Sekarang, ptr memegang nilai myAge alamat memori.
*/

/*
Pointer penting dalam C, karena memungkinkan kita memanipulasi data dalam memori komputer. 
Ini dapat mengurangi kode dan meningkatkan kinerja. Jika Anda familier dengan struktur data seperti daftar, 
pohon, dan grafik, Anda harus tahu bahwa pointer sangat berguna untuk mengimplementasikannya.
*/