#include <stdio.h> 

int main() {
    // tipe data integer dan untuk format dasarnya yaitu %d atau %i
    int myNum = 5;  // integer
    printf("contoh dari integer \n");
    printf("%d \n", myNum);
    printf("%i \n\n", myNum);

    // tipe data float dan untuk format dasarnya yaitu %f 
    float myFloatNum = 5.99;  // Float
    printf("contoh dari float \n");
    printf("%f \n\n", myFloatNum);

    // tipe data double dan untuk format dasarnya yaitu %lf
    double myDoubleNum = 19.99;  // Double 
    printf("contoh dari double \n");
    printf("%lf \n\n", myDoubleNum);

    // tipe data char atau character dan untuk format dasarnya yaitu %c
    char myLetter = 'D'; // Character
    printf("contoh dari character \n");
    printf("%c \n\n", myLetter);

    // tipe data string (teks) dan untuk format dasarnya yaitu %s
    char greetings[] = "Hello World!";
    printf("contoh dari string \n");
    printf("%s", greetings);

    // Penting bagi Anda untuk menggunakan penentu format yang benar untuk tipe data yang ditentukan, atau program dapat menghasilkan kesalahan atau bahkan macet.

    return 0;
}