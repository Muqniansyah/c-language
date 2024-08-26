// Sekarang Anda dapat dengan mudah membuat beberapa variabel struktur dengan nilai yang berbeda, hanya menggunakan satu struktur

#include <stdio.h>

struct myStructure {
    int myNum;
    char myLetter;
};

int main() {
    // Buat variabel struct yang berbeda
    struct myStructure s1;
    struct myStructure s2;

    // Tetapkan nilai ke variabel struct yang berbeda
    s1.myNum = 13;
    s1.myLetter = 'B';

    s2.myNum = 20;
    s2.myLetter = 'C';

    // cetak nilai
    printf("s1 number: %d \n", s1.myNum);
    printf("s1 letter: %c \n", s1.myLetter);

    printf("s2 number: %d \n", s2.myNum);
    printf("s2 letter: %c \n", s2.myLetter);

    return 0;
}