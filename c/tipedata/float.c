#include <stdio.h>

int main() {
    float myFloatNum = 3.5;

    // Jika Anda ingin menghapus angka nol tambahan (mengatur presisi desimal), Anda dapat menggunakan titik ( .) diikuti oleh angka yang menentukan berapa banyak digit yang harus ditampilkan setelah titik desimal
    printf("%f\n", myFloatNum); // Defaultnya akan menampilkan 6 digit setelah koma desimal
    printf("%.1f\n", myFloatNum); // Hanya tampilkan 1 digit
    printf("%.2f\n", myFloatNum); // Hanya tampilkan 2 digit
    printf("%.4f", myFloatNum);   // Hanya tampilkan 4 digit

    return 0;
}