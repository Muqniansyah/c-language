// Jika Anda tidak ingin orang lain (atau diri Anda sendiri) mengubah nilai variabel yang ada, Anda dapat menggunakan constkata kunci.
// Ini akan mendeklarasikan variabel sebagai "konstan", yang berarti tidak dapat diubah dan hanya dapat dibaca

#include <stdio.h>

int main() {
    // Anda harus selalu mendeklarasikan variabel sebagai konstanta bila Anda memiliki nilai yang tidak mungkin berubah
    const int minutesPerHour = 60;
    const float PI = 3.14;

    printf("contoh constants atau konstanta pertama \n");
    printf("%d\n", minutesPerHour);
    printf("%f\n", PI);

    // Hal lain tentang variabel konstan adalah dianggap praktik yang baik untuk mendeklarasikannya dengan huruf besar.
    // Ini tidak diwajibkan, namun berguna untuk keterbacaan kode dan umum untuk programmer C
    const int BIRTHYEAR = 1980;

    printf("contoh constants atau konstanta kedua \n");
    printf("%d", BIRTHYEAR);
    
    return 0;
}