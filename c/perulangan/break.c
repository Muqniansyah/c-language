// break
// Pernyataan break itu digunakan untuk "melompat keluar" dari sebuah switch pernyataan. Pernyataan tersebut break juga dapat digunakan untuk keluar dari suatu masalah.

#include <stdio.h>

int main() {
    // Contoh ini keluar dari for loop ketika isama dengan 4
    int i;
    
    for (i = 0; i < 10; i++) {
        if (i == 4) {
        break;
        }
        printf("%d\n", i);
    }
    
    return 0;
}