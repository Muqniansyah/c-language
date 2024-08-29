// Untuk membaca dari sebuah berkas, Anda dapat menggunakan r mode

#include <stdio.h>

int main() {
    FILE *fptr;

    // Buka file dalam mode baca
    fptr = fopen("write.txt", "r");

    //  kita perlu membuat string yang cukup besar untuk menyimpan konten berkas. Misalnya, mari kita membuat string yang dapat menyimpan hingga 100 karakter
    char myString[100]; // Simpan konten file

    // Jika Anda mencoba membuka berkas untuk dibaca yang tidak ada, fopen() fungsi tersebut akan mengembalikan NULL.
    // Sebagai praktik yang baik, kita dapat menggunakan if pernyataan untuk menguji NULL, dan mencetak beberapa teks sebagai gantinya (ketika berkas tidak ada)

    // Jika filenya ada
    if(fptr != NULL) {
        // Untuk membaca konten write.txt, kita dapat menggunakan fgets() fungsi. 
        // dan Untuk membaca setiap baris berkas, Anda dapat menggunakan while loop
        
        // Baca isinya dan cetak
        while(fgets(myString, 100, fptr)) {
            printf("%s", myString);
        }
    // Jika filenya tidak ada 
    } else {
        printf("Tidak dapat membuka file.");
    }

    // Tutup berkasnya
    fclose(fptr);

    printf("\ncontoh menampilkan konten file hanya baris pertama dari berkas \n");
    FILE *fptr2;

    // Buka file dalam mode baca
    fptr2 = fopen("filename.txt", "r");

    // Simpan konten file
    char myString2[100];

    // Baca kontennya dan simpan di dalam myString2
    fgets(myString2, 100, fptr2);

    // Cetak konten file
    printf("%s", myString2);  
    
    // Tutup berkasnya
    fclose(fptr2);

    // Fungsi ini fgets hanya membaca baris pertama dari berkas. Jika Anda ingat, ada dua baris teks di dalam filename.txt.
    // Untuk membaca setiap baris berkas, Anda dapat menggunakan while loop.
    
    return 0;
}
