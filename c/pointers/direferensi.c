// Anda juga bisa mendapatkan nilai variabel yang ditunjuk oleh pointer, dengan menggunakan * operator ( operator dereferensi )

#include <stdio.h>

int main() {
    int myAge = 43;  // Deklarasi variabel
    int* ptr = &myAge;  // Deklarasi penunjuk

    // Referensi: Keluarkan alamat memori myAge dengan pointer (0x7ffe5367e044)
    printf("%p \n", ptr);

    // Dereference: Keluarkan nilai myAge dengan pointer (43)
    printf("%d \n", *ptr);
    
    return 0;
}


/*
Perhatikan bahwa * tanda ini bisa membingungkan di sini, karena ia melakukan dua hal berbeda dalam kode kita:
Bila digunakan dalam deklarasi ( int* ptr), ia menciptakan variabel penunjuk.
Bila tidak digunakan dalam deklarasi, ia bertindak sebagai operator dereferensi.

Ada dua cara untuk mendeklarasikan variabel pointer di C :
int* myNum;
int *myNum;

pointer harus ditangani dengan hati-hati, karena ada kemungkinan merusak data yang disimpan di alamat memori lainnya.
*/