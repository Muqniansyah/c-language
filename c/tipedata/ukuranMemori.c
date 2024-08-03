#include <stdio.h>

int main() {
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;
    
    // Ukuran memori mengacu pada seberapa banyak ruang yang ditempati suatu tipe dalam memori komputer .
    // Untuk benar-benar mendapatkan ukuran (dalam byte) dari tipe data atau variabel, gunakan operator sizeof
    printf("%lu\n", sizeof(myInt));
    printf("%lu\n", sizeof(myFloat));
    printf("%lu\n", sizeof(myDouble));
    printf("%lu\n", sizeof(myChar));

    /*
    Perhatikan bahwa kita menggunakan %lupenentu format untuk mencetak hasil, bukan %d. 
    Hal ini karena kompiler mengharapkan operator sizeof untuk mengembalikan long unsigned int( %lu), bukan int( %d). 
    Pada beberapa komputer, hal ini mungkin berfungsi dengan %d, tetapi lebih aman menggunakan %lu.
    */
    
    return 0;
}