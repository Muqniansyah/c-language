#include <stdio.h>

int main() {
    // if statement
    // Gunakan if pernyataan untuk menentukan blok kode yang akan dieksekusi jika kondisinya adalah true.
    printf("contoh penggunaan if \n");
    if (20 > 18) {
        printf("20 lebih besar dari 18 \n\n");
    }

    printf("contoh kedua penggunaan if \n");
    int x = 20;
    int y = 18;
    if (x > y) {
        printf("x lebih besar dari y \n\n");
    }  

    // else statement
    // Gunakan elsepernyataan untuk menentukan blok kode yang akan dieksekusi jika kondisinya adalah false.
    printf("contoh penggunaan else \n");
    int time = 20;

    if (time < 18) {
        printf("selamat siang \n\n");
    } else {
        printf("selamat malam \n\n");
    }

    // else if statement
    // Gunakan else ifpernyataan untuk menentukan kondisi baru jika kondisi pertama adalah false.
    printf("contoh penggunaan else if \n");
    int jam = 22;

    if (jam < 10) {
        printf("selamat pagi \n\n");
    } else if (jam < 20) {
        printf("selamat sore \n\n");
    } else {
        printf("selamat malam \n\n");
    }

    // shorthand if else (ternary operator)
    // Ada juga singkatan if else, yang dikenal sebagai operator ternary karena terdiri dari tiga operan. Operator ini dapat digunakan untuk mengganti beberapa baris kode dengan satu baris.
    // Operator ini sering digunakan untuk mengganti pernyataan if else sederhana.
    printf("contoh penggunaan shorthand if else \n");
    int waktu = 20;

    (waktu < 18) ? printf("selamat siang") : printf("selamat malam");

    return 0;
}