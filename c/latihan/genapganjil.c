#include <stdio.h>

int main() {
    // Cari tahu apakah suatu angka genap atau ganjil
    int myNum = 5;

    if (myNum % 2 == 0) {
        printf("%d genap \n", myNum);
    } else {
        printf("%d ganjil \n", myNum);
    }

    return 0;
}