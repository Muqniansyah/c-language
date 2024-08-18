// C juga memiliki banyak fungsi string yang berguna, yang dapat digunakan untuk melakukan operasi tertentu pada string.
// Untuk menggunakannya, Anda harus menyertakan <string.h>file header dalam program Anda

#include <stdio.h>
#include <string.h>

int main() {
    // Misalnya, untuk mendapatkan panjang string atau string length, Anda dapat menggunakan strlen() fungsi
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d \n", strlen(alphabet));

    // kita biasa sizeofmendapatkan ukuran string/array. Perhatikan bahwa sizeofdan strlenberperilaku berbeda, karena sizeofjuga menyertakan \0 karakter saat menghitung
    char huruf[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("panjangnya adalah: %d \n", strlen(huruf));
    printf("ukurannya adalah: %d \n", sizeof(huruf));
    
    // Penting juga bagi Anda untuk mengetahui bahwa sizeof akan selalu mengembalikan ukuran memori (dalam byte), dan bukan panjang string sebenarnya.
    char huruf2[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("panjangnya adalah: %d \n", strlen(huruf2));
    printf("ukurannya adalah: %d \n\n", sizeof(huruf2));

    printf("Menggabungkan String \n");
    // Untuk menggabungkan (menggabungkan) dua string, Anda dapat menggunakan strcat() fungsi
    char str1[20] = "Hello ";
    char str2[] = "World!";
    
    // Gabungkan str2 ke str1 (hasilnya disimpan di str1)
    strcat(str1, str2);
    
    // Cetak str1
    printf("%s \n\n", str1);
    // Perhatikan bahwa ukuran str1 harus cukup besar untuk menyimpan hasil gabungan dua string (20 dalam contoh kita)

    printf("Salin String \n");
    // Untuk menyalin nilai dari satu string ke string lain, Anda dapat menggunakan strcpy() fungsi
    char str3[20] = "Hello World!";
    char str4[20];

    // Salin str3 ke str4
    strcpy(str4, str3);

    // Cetak str4
    printf("%s \n\n", str4);
    // Perhatikan bahwa ukuran str2 harus cukup besar untuk menyimpan string yang disalin (20 dalam contoh kita).

    printf("Bandingkan String \n");
    // Untuk membandingkan dua string, Anda dapat menggunakan strcmp() fungsi.
    // Mengembalikan nilai 0 jika dua string sama, jika tidak maka nilainya bukan 0
    char str5[] = "Hello";
    char str6[] = "Hello";
    char str7[] = "Hi";

    // Bandingkan str5 dan str6, dan cetak hasilnya
    printf("%d \n", strcmp(str5, str6));
    
    // Bandingkan str5 dan str7, dan cetak hasilnya
    printf("%d \n", strcmp(str5, str7));

    return 0;
}