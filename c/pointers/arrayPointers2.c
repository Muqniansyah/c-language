// Oke, jadi apa hubungan antara pointer dan array? Nah, dalam C, nama array sebenarnya adalah pointer ke elemen pertama array.
// Alamat memori elemen pertama sama dengan nama array

#include <stdio.h>

int main() {
    int myNumbers[4] = {25, 50, 75, 100};

    // Dapatkan alamat memori array myNumbers
    printf("%p \n", myNumbers);

    // Dapatkan alamat memori elemen array pertama
    printf("%p \n\n", &myNumbers[0]);


    // Ini pada dasarnya berarti bahwa kita dapat bekerja dengan array melalui pointer!
    // Karena myNumbers2 adalah penunjuk ke elemen pertama di myNumbers2, Anda dapat menggunakan * operator untuk mengaksesnya
    printf("contoh bekerja dengan array melalui pointer \n");
    int myNumbers2[4] = {25, 50, 75, 100};

    // Dapatkan nilai elemen pertama di myNumbers2
    printf("%d \n", *myNumbers2);

    printf("contoh 2 bekerja dengan array melalui pointer \n");
    // Untuk mengakses elemen lainnya di angka, Anda dapat menambah pointer/array (+1, +2, dan seterusnya)
    int angka[4] = {25, 50, 75, 100};

    // Dapatkan nilai elemen kedua dalam angka
    printf("%d \n", *(angka + 1));

    // Dapatkan nilai elemen ketiga dalam angka
    printf("%d \n", *(angka + 2));

    printf("contoh 3 bekerja dengan array melalui pointer \n");
    // atau bisa dengan menggunakan looping
    int number[4] = {25, 50, 75, 100};
    int *ptr = number;
    int i;

    for (i = 0; i < 4; i++) {
        printf("%d \n", *(ptr + i));
    }

    printf("contoh 4 bekerja dengan array melalui pointer \n");
    // Dimungkinkan juga untuk mengubah nilai elemen array dengan pointer
    int numbersAngka[4] = {25, 50, 75, 100};

    // Ubah nilai elemen pertama menjadi 13
    *numbersAngka = 13;

    // Ubah nilai elemen kedua menjadi 17
    *(numbersAngka +1) = 17;

    // Dapatkan nilai elemen pertama
    printf("%d \n", *numbersAngka);

    // Dapatkan nilai elemen kedua
    printf("%d \n", *(numbersAngka + 1));  

    return 0;
}

/*
Cara kerja dengan array ini mungkin tampak agak berlebihan. Terutama dengan array sederhana seperti pada contoh di atas. Namun, untuk array yang besar, akan jauh lebih efisien untuk mengakses dan memanipulasi array dengan pointer.
Mengakses array dua dimensi dengan pointer juga dianggap lebih cepat dan mudah.
Dan karena string sebenarnya adalah array, Anda juga dapat menggunakan pointer untuk mengakses string.
*/