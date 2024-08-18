// String digunakan untuk menyimpan teks/karakter. Misalnya, "Hello World" adalah serangkaian karakter.

#include <stdio.h>

int main() {
    // Tidak seperti banyak bahasa pemrograman lainnya, C tidak memiliki tipe String untuk membuat variabel string dengan mudah. ​​Sebagai gantinya, Anda harus menggunakan char tipe tersebut dan membuat array karakter untuk membuat string dalam C.
    // Perhatikan bahwa Anda harus menggunakan tanda kutip ganda ("").
    char greetings[] = "Hello World!";

    // Untuk mengeluarkan string, Anda dapat menggunakan printf() fungsi tersebut bersama dengan penentu format %s untuk memberi tahu C bahwa kita sekarang bekerja dengan string.
    printf("%s \n\n", greetings);

    printf("Akses String \n");
    // Karena string sebenarnya adalah array dalam C, Anda dapat mengakses string dengan merujuk ke nomor indeksnya di dalam tanda kurung siku []
    // Contoh ini mencetak karakter pertama (0) dalam ucapan
    char ucapan[] = "Hello World!";
    printf("%c \n\n", ucapan[0]);
    // Perhatikan bahwa kita harus menggunakan %c penentu format untuk mencetak karakter tunggal.

    printf("Ubah String \n");
    // Untuk mengubah nilai karakter tertentu dalam string, lihat nomor indeks, dan gunakan tanda kutip tunggal ('')
    char nyapa[] = "Hello World!";
    nyapa[0] = 'J';
    printf("%s \n\n", nyapa);
    
    printf("Loop Melalui String \n");
    // Anda juga dapat melakukan pengulangan melalui karakter-karakter dalam sebuah string, dengan menggunakan for loop
    char carName[] = "Volvo";
    int i;
    
    for (i = 0; i < 5; ++i) {
        printf("%c \n", carName[i]);
    }
    
    printf("\n");
    printf("Anda juga dapat menggunakan rumus sizeof untuk membuat loop lebih berkelanjutan \n");
    char nama[] = "Muqniansyah";
    int length = sizeof(nama) / sizeof(nama[0]);
    int a;
    
    for (a = 0; a < length; ++a) {
        printf("%c \n", nama[a]);
    }

    printf("\n");
    printf("Cara Lain Membuat String \n");
    // Anda juga harus memperhatikan bahwa Anda dapat membuat string dengan sekumpulan karakter.
    char greetings2[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    printf("%s \n", greetings2);
    // Mengapa kita menyertakan \0karakter di akhir? Ini dikenal sebagai "karakter akhir null", dan harus disertakan saat membuat string menggunakan metode ini. Ini memberi tahu C bahwa ini adalah akhir dari string.
    // Karakter \0 dalam konteks kode pemrograman C atau C++ adalah null character atau null terminator. Karakter ini digunakan untuk menandai akhir dari sebuah string.
    // Dengan adanya \0, fungsi-fungsi string di C, seperti printf, tahu kapan harus berhenti membaca karakter dari array. Karakter \0 di akhir string memastikan bahwa operasi apa pun yang bekerja dengan string mengetahui batas akhir string tersebut. Tanpa karakter ini, program tidak akan tahu kapan string berakhir, dan dapat menyebabkan hasil yang tidak diinginkan atau bahkan kesalahan program.
    
    /*
        Perbedaan antara dua cara membuat string adalah bahwa metode pertama lebih mudah ditulis, dan Anda tidak perlu menyertakan karakter \0, karena C akan melakukannya untuk Anda.
        cara 1 : char greetings[] = "Hello World!";
        cara 2 : char greetings2[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    */ 
    
    return 0;
}