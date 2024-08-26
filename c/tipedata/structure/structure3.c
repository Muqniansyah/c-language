// Ingat bahwa string dalam C sebenarnya adalah array karakter. ini adalah contoh menggunakan string.
// Anda dapat menggunakan strcpy() fungsi tersebut dan menetapkan nilai ke s1.myString, seperti ini

#include <stdio.h>
#include <string.h>

struct myStructure {
    int myNum;
    char myLetter;
    char myString[30];  // String yang dapat menyimpan hingga 30 karakter
};

int main() {
    struct myStructure s1;

    // Tetapkan nilai ke string menggunakan fungsi strcpy
    strcpy(s1.myString, "Some text");

    // Cetak nilainya
    printf("My string: %s", s1.myString);

    return 0;
}