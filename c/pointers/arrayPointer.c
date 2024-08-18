// Daripada mencetak nilai setiap elemen array, mari cetak alamat memori setiap elemen array

#include <stdio.h>

int main() {
    int myNumbers[4] = {25, 50, 75, 100};
    int i;

    for (i = 0; i < 4; i++) {
        printf("%p\n", &myNumbers[i]);
    }

    // Perhatikan bahwa nomor terakhir dari setiap alamat memori elemen berbeda, dengan penambahan 4.
    // Karena ukuran suatu inttipe biasanya 4 byte
    int myInt;
    printf("Ukuran suatu int tipe \n");
    printf("%lu \n\n", sizeof(myInt));

    // Jadi dari "contoh alamat memori" di atas, Anda dapat melihat bahwa kompiler menyisakan 4 byte memori untuk setiap elemen array, yang berarti bahwa seluruh array menempati 16 byte (4 * 4) penyimpanan memori
    printf("contoh memori untuk setiap elemen array \n");
    int myNumbers2[4] = {25, 50, 75, 100};
    printf("%lu", sizeof(myNumbers2));

    return 0;
}