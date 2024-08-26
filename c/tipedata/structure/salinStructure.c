// anda juga dapat menetapkan satu struktur ke struktur lainnya. Dalam contoh berikut, nilai s1 disalin ke s2

#include <stdio.h>

struct myStructure {
    int myNum;
    char myLetter;
    char myString[30];
};

int main() {
    // Buat variabel struktur dan berikan nilai padanya
    struct myStructure s1 = {13, 'B', "Some text"};
    
    // Buat variabel struktur lain
    struct myStructure s2;
    
    // Salin nilai s1 ke s2
    s2 = s1;

    // cetak nilai
    printf("%d %c %s", s2.myNum, s2.myLetter, s2.myString);

    return 0;
}