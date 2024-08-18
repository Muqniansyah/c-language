// program yang mencari usia terendah di antara berbagai usia

#include <stdio.h>

int main() {
    // Sebuah array yang menyimpan berbagai usia
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    
    int i;
    
    // Dapatkan panjang array
    int length = sizeof(ages) / sizeof(ages[0]);
    
    // Buat variabel 'usia terendah' ​​dan tetapkan elemen array pertama usia ke dalamnya
    int lowestAge = ages[0];

    // Ulangi elemen array usia untuk menemukan usia terendah
    for (i = 0; i < length; i++) {
        // Periksa apakah usia saat ini lebih kecil dari 'usia terendah' ​​saat ini
        if (lowestAge > ages[i]) {
            // Jika ditemukan usia yang lebih kecil, perbarui 'usia terendah' ​​dengan elemen tersebut
            lowestAge = ages[i];
        }
    }
    
    // Keluarkan nilai usia terendah
    printf("Usia terendah dalam array adalah: %d", lowestAge);
    
    return 0;
}