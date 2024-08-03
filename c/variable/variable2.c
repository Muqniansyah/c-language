#include <stdio.h> 

int main() {
    // Jika Anda menetapkan nilai baru ke variabel yang sudah ada, nilai tersebut akan menimpa nilai sebelumnya
    int myNum = 15;
    myNum = 10; 

    printf("contoh pertama \n");
    printf("nilai dari myNum adalah : %d \n\n", myNum);

    // Anda juga dapat menetapkan nilai satu variabel ke variabel lain
    int angka1 = 20;
    int angka2 = 30;

    angka1 = angka2; // Tetapkan nilai angka2 (30) ke angka1
    printf("contoh kedua \n");
    printf("nilai angka 1 : %d \n\n", angka1); // angka1 sekarang menjadi 30, bukan 20

    // Anda juga bisa salin nilai ke variabel kosong
    int angkaAda = 12;
    int angkaKosong;

    angkaKosong = angkaAda;
    printf("contoh ketiga \n");
    printf("angka kosong bernilai : %d \n\n", angkaKosong);

    // Anda juga bisa mendeklarasikan beberapa variabel
    // Untuk mendeklarasikan lebih dari satu variabel dengan tipe yang sama, gunakan daftar yang dipisahkan dengan koma
    int x = 5, y = 6, z = 4;
    printf("contoh keempat \n");
    printf("hasil tambah x, y, dan z adalah : %d \n\n", x + y + z);

    // Anda juga dapat menetapkan nilai yang sama ke beberapa variabel dengan tipe yang sama
    int a, b, c;
    a = b = c = 20;

    printf("contoh kelima \n");
    printf("hasil tambah a, b, dan c adalah : %d", a + b + c);

    return 0;
}