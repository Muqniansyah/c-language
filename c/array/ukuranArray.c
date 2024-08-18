// Dapatkan Ukuran atau Panjang Array
// Untuk mendapatkan ukuran array, Anda dapat menggunakan sizeof operator

#include <stdio.h>

int main() {
    int myNumbers[] = {10, 25, 50, 75, 100};
    printf("%lu \n\n", sizeof(myNumbers));
    // Karena sizeof operator mengembalikan ukuran suatu tipe dalam byte.
    // bahwa suatu int tipe biasanya 4 byte, jadi dari contoh di atas, 4 x 5 ( 4 byte x 5 elemen ) = 20 byte. Mengetahui ukuran memori suatu array sangat bagus ketika Anda bekerja dengan program yang lebih besar yang memerlukan manajemen memori yang baik.

    // Namun, bila Anda hanya ingin mengetahui berapa banyak elemen yang dimiliki suatu array, Anda dapat menggunakan rumus berikut (yang membagi ukuran array dengan ukuran satu elemen array).
    printf("Rumus mengetahui berapa banyak elemen yang dimiliki suatu array \n");
    int angkaSaya[] = {10, 25, 50, 75, 100};
    int length = sizeof(angkaSaya) / sizeof(angkaSaya[0]);
    
    printf("%d \n\n", length);
    

    // contoh membuat loop menggunakan array yang baik 
    printf("contoh membuat loop menggunakan array yang baik \n");

    // pada looping array sebelumnya kita menuliskan ukuran array dalam kondisi loop ( i < 4). Ini tidak ideal, karena hanya akan berfungsi untuk array dengan ukuran tertentu.
    // Namun, dengan menggunakan sizeof rumus dari contoh di atas, kita sekarang dapat membuat loop yang berfungsi untuk array dengan ukuran apa pun, yang lebih berkelanjutan.
    int myAngka[] = {25, 50, 75, 100};
    int panjang = sizeof(myAngka) / sizeof(myAngka[0]);
    int i;

    for (i = 0; i < panjang; i++) {
        printf("%d\n", myAngka[i]);
    }

    return 0;
}