// Bila Anda tahu persis berapa kali Anda ingin mengulang suatu blok kode, gunakan for loop

#include <stdio.h>

int main() {
    // for loop 
    // contoh dari for loop. Contoh berikut akan mencetak angka 0 hingga 4.
    printf("contoh dari for loop \n");
    int i;

    for (i = 0; i < 5; i++) {
        printf("%d \n", i);
    }

    /*
    Ekspresi 1 menetapkan variabel sebelum loop dimulai (int i = 0).
    Ekspresi 2 mendefinisikan kondisi agar loop dapat berjalan (i harus kurang dari 5). Jika kondisinya benar, loop akan dimulai lagi, jika salah, loop akan berakhir.
    Ekspresi 3 meningkatkan nilai (i++) setiap kali blok kode dalam loop dieksekusi.
    */
    
    // nested loop
    // Anda juga dapat menempatkan loop di dalam loop lain. Ini disebut nested loop.
    // “Loop dalam” akan dieksekusi satu kali untuk setiap iterasi “loop luar”.
    // contoh dari nested loop
    printf("contoh dari nested loop \n");
    int x, y;
    
    // Outer loop
    for (x = 1; x <= 2; ++x) {
        printf("Outer: %d \n", x);  // Dieksekusi sebanyak 2 kali
        
        // Inner loop
        for (y = 1; y <= 3; ++y) {
            printf(" Inner: %d \n", y);  // Dieksekusi 6 kali (2 * 3)
        }
    }
    
    return 0;
}