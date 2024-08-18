// Meskipun +operator ini sering digunakan untuk menjumlahkan dua nilai, operator ini juga dapat digunakan untuk menjumlahkan sebuah variabel dan sebuah nilai, atau sebuah variabel dan variabel lainnya

#include <stdio.h>

int main() {
    int sum1 = 100 + 50;        // 150 (100 + 50)
    int sum2 = sum1 + 250;      // 400 (150 + 250)
    int sum3 = sum2 + sum2;     // 800 (400 + 400)
    printf("%d\n", sum1);
    printf("%d\n", sum2);
    printf("%d\n", sum3);
    
    return 0;
}