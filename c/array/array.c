// Array digunakan untuk menyimpan beberapa nilai dalam satu variabel, alih-alih mendeklarasikan variabel terpisah untuk setiap nilai.

// Untuk membuat array, tentukan tipe data (seperti int) dan tentukan nama array diikuti dengan tanda kurung siku [] .
// Untuk memasukkan nilai ke dalamnya, gunakan daftar yang dipisahkan koma, di dalam kurung kurawal. 
// contoh : int myNumbers[] = {25, 50, 75, 100};

#include <stdio.h> 

int main() {
    // Untuk mengakses elemen array, lihat nomor indeksnya.
    // Indeks array dimulai dengan 0 : [0] adalah elemen pertama. [1] adalah elemen kedua, dan seterusnya.
    int myNumbers[] = {25, 50, 75, 100};
    printf("%d \n", myNumbers[0]);
    printf("%d \n", myNumbers[1]);
    printf("%d \n", myNumbers[2]);
    printf("%d \n\n", myNumbers[3]);

    // contoh mengubah elemen array
    // Untuk mengubah nilai elemen tertentu, lihat nomor indeks.
    printf("Contoh mengubah elemen array \n");
    myNumbers[0] = 33;
    printf("%d \n\n", myNumbers[0]);

    // contoh looping menggunakan array
    printf("contoh looping menggunakan array \n");

    // Anda dapat melakukan pengulangan melalui elemen-elemen array dengan for loop.
    // Contoh berikut menampilkan semua elemen dalam angka array
    int angka[] = {25, 50, 75, 100};
    int i;
    
    for (i = 0; i < 4; i++) {
        printf("%d \n\n", angka[i]);
    }

    // contoh mengatur ukuran array
    printf("contoh mengatur ukuran array \n");

    // Cara umum lainnya untuk membuat array adalah dengan menentukan ukuran array dan menambahkan elemen kemudian
    int angkaSaya[4]; // Mendeklarasikan array yang terdiri dari empat bilangan bulat

    // Tambahkan elemen ke dalamnya
    angkaSaya[0] = 25;
    angkaSaya[1] = 50;
    angkaSaya[2] = 75;
    angkaSaya[3] = 100;

    printf("%d \n", angkaSaya[0]);

    // Dengan menggunakan metode ini, Anda harus mengetahui jumlah elemen array terlebih dahulu, agar program dapat menyimpan cukup memori.
    // Anda tidak dapat mengubah ukuran array setelah pembuatan.
    
    return 0;
}