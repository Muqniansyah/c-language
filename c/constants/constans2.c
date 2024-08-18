#include <stdio.h>

int main() {
    // error jika constans dirubah
    const int myNum = 15; // myNum akan selalu 15
    myNum = 10; // error: penetapan variabel read-only 'myNum'
    
    printf("%d \n", myNum);

    // Saat Anda mendeklarasikan variabel konstan, variabel tersebut harus diberi nilai
    // ini contoh error jika tidak diberikan nilai pada variabel konstant
    const int minutesPerHour;
    minutesPerHour = 60; // error
    
    printf("%d", minutesPerHour);

    return 0;
}