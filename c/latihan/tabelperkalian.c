#include <stdio.h>

int main() {
    int number = 2;
    int i;

    // Cetak tabel perkalian untuk angka 2
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}