#include <stdio.h> 

int main() {
    // mendeklarasikan sebuah variabel int atau integer
    int myInt;
    // Tetapkan nilai ke variabel
    myInt = 10;
    
    // Menampilkan nilai dari variabel myInt type int
    printf("Nilai dari myInt adalah: %d \n", myInt);

    // mendeklarasikan sebuah variabel char atau character dan menentapkan nilainya.
    char myLetter = 'm';

    // Menampilkan nilai dari variabel myLetter type char
    printf("Nilai dari myLetter adalah : %c \n", myLetter);

    // mendeklarasikan sebuah variabel float dan menentapkan nilainya.
    float myFloat = 12.5;

    // Menampilkan nilai dari variabel myFloat type float
    printf("Nilai dari myFloat adalah : %f \n", myFloat);

    // Untuk mencetak berbagai jenis dalam satu printf() fungsi
    printf("My number is %d and my letter is %c \n", myInt, myLetter); 

    // Anda juga dapat mencetak suatu nilai tanpa menyimpannya dalam variabel, selama Anda menggunakan penentu format yang benar
    printf("My favorite number is: %d \n", 15);
    printf("My favorite letter is: %c", 'D');
    // Akan tetapi , lebih berkelanjutan untuk menggunakan variabel karena variabel tersebut disimpan untuk digunakan nanti dan dapat digunakan kembali kapan saja.

    return 0;
}
