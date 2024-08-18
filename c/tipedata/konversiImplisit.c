// Konversi implisit dilakukan secara otomatis oleh kompiler saat Anda menetapkan nilai satu tipe ke tipe lainnya.

#include <stdio.h>

int main() {
    // Automatic conversion: int to float
    float myFloat = 9;

    printf("Automatic conversion: int to float \n");
    printf("%f \n", myFloat);

    // Automatic conversion: float to int
    int myInt = 9.99;

    printf("Automatic conversion: float to int \n");
    printf("%d", myInt);

    return 0;
}