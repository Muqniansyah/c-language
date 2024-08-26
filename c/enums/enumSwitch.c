// Enum sering digunakan dalam pernyataan switch untuk memeriksa nilai yang sesuai

#include <stdio.h>

enum Level {
    LOW = 1,
    MEDIUM,
    HIGH
};

int main() {
    enum Level myVar = MEDIUM;
    
    switch (myVar) {
        case 1:
            printf("Low Level");
            break;
        case 2:
            printf("Medium level");
            break;
        case 3:
            printf("High level");
            break;
    }
    
    return 0;
}

/*
Mengapa dan Kapan Menggunakan Enums?
Enum digunakan untuk memberi nama pada konstanta, yang membuat kode lebih mudah dibaca dan dipelihara.

Gunakan enums ketika Anda memiliki nilai yang Anda tahu tidak akan berubah, seperti bulan hari, hari, warna, setumpuk kartu, dll.
*/