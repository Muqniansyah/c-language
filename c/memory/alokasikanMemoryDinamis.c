// Memori dinamis adalah memori yang dialokasikan setelah program mulai berjalan. Alokasi memori dinamis juga dapat disebut sebagai alokasi memori runtime.
// Tidak seperti memori statis, Anda memiliki kendali penuh atas seberapa banyak memori yang digunakan setiap saat. Anda dapat menulis kode untuk menentukan berapa banyak memori yang Anda butuhkan dan mengalokasikannya.
// Memori dinamis tidak termasuk dalam variabel, ia hanya dapat diakses dengan pointer.

#include <stdio.h>
#include <stdlib.h> // harus menggunakan header <stdlib.h>

int main() {
    // kita tidak dapat sizeof mengukur seberapa banyak memori yang dialokasikan, kita harus menghitungnya dengan mengalikan jumlah item dengan ukuran tipe data.
    int *students;
    int numStudents = 12;
    students = calloc(numStudents, sizeof(*students));
    printf("%d", numStudents * sizeof(*students)); // 48 bytes
    // Saat bekerja dengan alokasi memori dinamis, Anda juga harus memeriksa kesalahan dan mengosongkan memori di akhir program.

    return 0;
}