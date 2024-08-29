// C memiliki bool tipe data, yang dikenal sebagai boolean.
// Boolean mewakili nilai baik true atau false.
// Variabel boolean dideklarasikan dengan bool kata kunci dan dapat mengambil nilai true atau false

#include <stdio.h>
#include <stdbool.h>  // Import the boolean header file jika memakai bool.

int main() {
        // membuat variabel boolean
    bool sayaCakep = true;
    bool sayaIkan = false;
        // mengembalikkan nilai boolean
    printf("%d \n", sayaCakep);  // mengembalikkan 1 (true)
    printf("%d \n", sayaIkan);     // mengembalikkan 0 (false)

    // Namun, lebih umum untuk mengembalikan nilai boolean dengan membandingkan nilai dan variabel.
    // contoh membandingkan nilai dan variabel
    printf("contoh membandingkan nilai dan variabel \n");
    printf("%d \n", 10 > 9);

    // contohb membandingkan dua variabel
    printf("contoh membandingkan dua variabel \n");
    int x = 10;
    int y = 9;

    printf("%d \n", x > y);

    // Anda tidak terbatas hanya membandingkan angka. Anda juga dapat membandingkan variabel boolean, atau bahkan struktur khusus, seperti array
    // contoh membandingkan variabel boolean
    printf("contoh membandingkan variabel boolean \n");
    bool isHamburgerTasty = true;
    bool isPizzaTasty = true;
    
    printf("%d", isHamburgerTasty == isPizzaTasty);

    return 0;
}