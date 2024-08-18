// Konversi eksplisit dilakukan secara manual dengan menempatkan jenis dalam tanda kurung () di depan nilai.

#include <stdio.h>

int main() {
    // Manual conversion: int to float
    float sum = (float) 5 / 2;

    printf("Manual conversion: int to float \n");
    printf("%f \n", sum);

    // Anda juga dapat menempatkan tipe di depan variabel
    int num1 = 5;
    int num2 = 2;
    float hasil = (float) num1 / num2;

    printf("contoh menempatkan tipe di depan variabel \n");
    printf("%f \n", hasil);

    // Anda dapat membuat output lebih bersih dengan menghilangkan angka nol tambahan dengan presisi desimal
    int num3 = 5;
    int num4 = 2;
    float hasil2 = (float) num3 / num4;

    printf("contoh dengan presisi desimal \n");
    printf("%.1f \n", hasil2);

    return 0;
}