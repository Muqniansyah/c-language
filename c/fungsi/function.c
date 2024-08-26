#include <stdio.h>

// buat fungsi
void myFunction() {
    printf("fungsi berhasil berjalan \n\n");
}

int main () {
    // memanggil fungsi
    myFunction();

    // dan suatu fungsi dapat dipanggil beberapa kali
    printf("contoh pemanggilan fungsi beberapa kali \n");
    myFunction();
    myFunction();
    myFunction();

    return 0;
}