// Struktur (juga disebut struct) adalah cara untuk mengelompokkan beberapa variabel terkait ke dalam satu tempat. Setiap variabel dalam struktur dikenal sebagai anggota struktur.
// Tidak seperti array , suatu struktur dapat berisi banyak tipe data berbeda (int, float, char, dll.).

#include <stdio.h>

// Buat struktur yang disebut myStructure (myStructure adalah nama dari structnya atau strukturnya)
struct myStructure {
    int myNum;
    char myLetter;
};

int main() {
    // Buat variabel struktur myStructure yang disebut s1 (s1 adalah nama dari variabel struktur)
    struct myStructure s1;

    // Tetapkan nilai kepada anggota s1
    // Untuk mengakses anggota suatu struktur, gunakan sintaks titik (.)
    s1.myNum = 13;
    s1.myLetter = 'B';

    // Nilai cetak
    printf("My number: %d \n", s1.myNum);
    printf("My letter: %c \n", s1.myLetter);

    return 0;
}