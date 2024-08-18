// jika Anda ingin menyimpan data dalam bentuk tabel, seperti tabel dengan baris dan kolom, Anda perlu memahami array multidimensi.
// Array multidimensi pada dasarnya adalah array dari array.
// Array dapat memiliki sejumlah dimensi. kami akan memperkenalkan yang paling umum yaitu array dua dimensi (2D).

#include <stdio.h>

int main() {
    // Array 2D juga dikenal sebagai matriks (tabel baris dan kolom).
    // Dimensi pertama mewakili jumlah baris [2], sedangkan dimensi kedua mewakili jumlah kolom [3]. Nilai-nilai tersebut ditempatkan dalam urutan baris.
    int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

    printf("mengakses elemen array 2D \n");
    // Untuk mengakses elemen array dua dimensi, Anda harus menentukan nomor indeks baris dan kolom. Pernyataan ini mengakses nilai elemen pada baris pertama (0) dan kolom ketiga (2) dari array matriks.
    printf("%d \n\n", matrix[0][2]);
    // Ingat bahwa: Indeks array dimulai dengan 0: [0] adalah elemen pertama. [1] adalah elemen kedua, dst.
    
    printf("Mengubah Elemen dalam Array 2D \n");
    // Untuk mengubah nilai suatu elemen, lihat nomor indeks elemen di setiap dimensi
    // Contoh berikut akan mengubah nilai elemen di baris pertama (0) dan kolom pertama (0)
    matrix[0][0] = 9;
    printf("%d \n\n", matrix[0][0]); // Sekarang menghasilkan 9, bukan 1

    printf("Loop Melalui Array 2D\n");
    // Untuk melakukan perulangan pada array multidimensi, Anda memerlukan satu perulangan untuk setiap dimensi array.
    // Contoh berikut ini menampilkan semua elemen dalam array matriks
    int arrayMultidimensi[2][3] = { {1, 4, 2}, {3, 6, 8} };

    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
        printf("%d \n", arrayMultidimensi[i][j]);
        }
    }

    return 0;
} 