// Enum adalah tipe khusus yang mewakili sekelompok konstanta (nilai yang tidak dapat diubah).
// Untuk membuat enum, gunakan enumkata kunci, diikuti dengan nama enum, dan pisahkan item enum dengan koma

#include <stdio.h>

enum Level {
    LOW,
    MEDIUM,
    HIGH
};

int main() {
    // Buat variabel enum dan berikan nilai padanya
    enum Level myVar = MEDIUM;
    
    // Cetak variabel enum
    printf("%d", myVar);
    
    return 0;
}