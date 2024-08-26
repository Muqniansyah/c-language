// Memori dinamis berperilaku seperti array, dengan tipe datanya ditentukan oleh tipe penunjuk. Seperti halnya array, untuk mengakses elemen dalam memori dinamis, lihat nomor indeksnya

#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("contoh membaca dari dan menulis ke memory dinamis \n");
    // Alokasikan memori
    int *ptr;
    ptr = calloc(4, sizeof(*ptr));

    // Menulis ke memori
    *ptr = 2;
    ptr[1] = 4;
    ptr[2] = 6;

    // Baca dari memori
    printf("%d \n", *ptr);
    printf("%d %d %d \n\n", ptr[1], ptr[2], ptr[3]);

    printf("Catatan tentang tipe data \n");
    // Memori dinamis tidak memiliki tipe datanya sendiri, melainkan hanya serangkaian byte. Data dalam memori dapat diartikan sebagai suatu tipe berdasarkan tipe data penunjuk.
    // Dalam contoh ini, penunjuk ke empat byte dapat diartikan sebagai satu int nilai (4 byte) atau sebagai array 4 char nilai (masing-masing 1 byte).
    int *ptr1 = malloc(4);
    char *ptr2 = (char*) ptr1;
    ptr1[0] = 1684234849;

    printf("%d is %c %c %c %c", *ptr1, ptr2[0], ptr2[1], ptr2[2], ptr2[3]);

    return 0;
}