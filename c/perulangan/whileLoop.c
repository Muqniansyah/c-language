// Perulangan atau loop dapat mengeksekusi suatu blok kode selama suatu kondisi tertentu tercapai.
// Perulangan berguna karena menghemat waktu, mengurangi kesalahan, dan membuat kode lebih mudah dibaca.

#include <stdio.h>

int main() {
    // while loop akan mengulang blok kode selama kondisi yang ditentukan terpenuhi true
    // contoh dari while loop
    printf("contoh dari while loop \n");
    int i = 0;
    
    while (i < 5) {
        printf("%d \n", i);
        // Jangan lupa untuk menambah variabel yang digunakan dalam kondisi ( i++), jika tidak, loop tidak akan pernah berakhir!
        i++;
    }
    
    // do while loop merupakan varian dari while loop. Perulangan ini akan mengeksekusi blok kode satu kali, sebelum memeriksa apakah kondisinya benar, kemudian akan mengulang perulangan selama kondisinya benar.
    // contoh dari do while loop
    printf("contoh dari do while loop \n");
    int x = 0;

    do {
        printf("%d \n", x);
        x++;
    }
    while (x < 5);
    // jangan lupa untuk menambah variabel yang digunakan dalam kondisi didalam while, jika tidak, loop tidak akan pernah berakhir!
    // pada contoh dari do while loop akan selalu dijalankan setidaknya satu kali, bahkan jika kondisinya salah, karena blok kode dijalankan sebelum kondisinya diuji
    
    return 0;
}