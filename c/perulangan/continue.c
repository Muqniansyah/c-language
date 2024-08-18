// continue
// Pernyataan tersebut continue menghentikan satu iterasi (dalam perulangan) jika kondisi tertentu terjadi, dan berlanjut pada iterasi berikutnya dalam perulangan.

#include <stdio.h>

int main() {
    // Contoh ini melewatkan nilai 4
    int i;
    
    for (i = 0; i < 10; i++) {
        if (i == 4) {
        continue;
        }
        printf("%d\n", i);
    }   
    
    return 0;
}