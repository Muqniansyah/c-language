// Fungsi ini scanf() juga memperbolehkan beberapa masukan (bilangan bulat dan karakter dalam contoh berikut)

#include <stdio.h>

int main() {
    // Buat variabel int dan char
    int myNum;
    char myChar;

    // Minta pengguna untuk mengetikkan angka DAN karakter
    printf("Type a number AND a character and press enter: \n");

    // Dapatkan dan simpan nomor DAN karakter yang diketik pengguna
    scanf("%d %c", &myNum, &myChar);

    // Cetak nomornya
    printf("Your number is: %d\n", myNum);

    // Cetak karakternya
    printf("Your character is: %c\n", myChar);
    
    return 0;
}
