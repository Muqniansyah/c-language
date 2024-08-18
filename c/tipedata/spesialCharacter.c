#include <stdio.h>

int main() {
    // Urutan ini \"  menyisipkan tanda kutip ganda dalam sebuah string
    char txt[] = "We are the so-called \"Vikings\" from the north.";
    printf("%s \n", txt);
    
    // Urutan ini \'  menyisipkan tanda kutip tunggal dalam sebuah string
    char txt2[] = "It\'s alright.";
    printf("%s \n", txt2);

    // Urutan ini \\  menyisipkan satu garis miring terbalik dalam sebuah string
    char txt3[] = "The character \\ is called backslash.";
    printf("%s \n", txt3);

    // \n untuk baris baru
    char txt4[] = "Hello\nWorld!";
    printf("%s \n", txt4);

    // \t untuk tab
    char txt5[] = "Hello\tWorld!";
    printf("%s \n", txt5);

    // \0 untuk null
    char txt6[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("%s", txt6);

    return 0;
}