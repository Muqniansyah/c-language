// Ada juga daftar fungsi matematika yang tersedia, yang memungkinkan Anda melakukan tugas matematika pada angka.
// Untuk menggunakannya, Anda harus menyertakan math.h file header dalam program Anda

#include <stdio.h>
#include <math.h> // menyertakan math.h file header

int main() {
    printf("Akar Kuadrat \n");
    // Untuk menemukan akar kuadrat suatu angka, gunakan sqrt() fungsi
    printf("%f \n\n", sqrt(16));

    printf("Membulatkan Angka \n");
    // Fungsi ini ceil()membulatkan angka ke atas hingga bilangan bulat terdekat, 
    // dan floor() metode ini membulatkan angka ke bawah hingga bilangan bulat terdekat, lalu mengembalikan hasilnya
    printf("%f \n", ceil(1.4));
    printf("%f \n\n", floor(1.4));

    printf("Kekuatan \n");
    // Fungsi ini pow() mengembalikan nilai x pangkat y 
    printf("%f", pow(4, 3));

    return 0;
}