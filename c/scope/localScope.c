// Dalam C, variabel hanya dapat diakses di dalam wilayah tempat variabel tersebut dibuat. Ini disebut scope.
// Variabel yang dibuat di dalam suatu fungsi termasuk dalam lingkup lokal fungsi tersebut, dan hanya dapat digunakan di dalam fungsi tersebut.

#include <stdio.h>

void myFunction() {
    // Variabel lokal milik myFunction
    int x = 5;

    // Cetak variabel x
    printf("%d", x);
    }

    int main() {
    myFunction();
    // Variabel lokal tidak dapat digunakan di luar fungsi tempat variabel tersebut berada. Jika Anda mencoba mengaksesnya di luar fungsi, akan terjadi kesalahan.

    return 0;
}