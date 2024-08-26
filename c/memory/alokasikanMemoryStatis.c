// Memori statis adalah memori yang dicadangkan untuk variabel sebelum program dijalankan. Alokasi memori statis juga dikenal sebagai alokasi memori waktu kompilasi.
// C secara otomatis mengalokasikan memori untuk setiap variabel ketika program dikompilasi.

#include <stdio.h>

int main() {
    // Misalnya, jika Anda membuat array integer berisi 20 mahasiswa (misalnya untuk semester musim panas), C akan menyisakan ruang untuk 20 elemen yang biasanya berukuran 80 byte memori (20 * 4)
    
    int students[20];
    printf("%lu", sizeof(students)); // 80 bytes
    
    return 0;
}

/*
Namun, ketika semester dimulai, ternyata hanya 12 mahasiswa yang hadir. Berarti Anda telah membuang-buang ruang dari 8 elemen yang tidak terpakai.
Karena Anda tidak dapat mengubah ukuran array, Anda memiliki memori cadangan yang tidak diperlukan.
Perhatikan bahwa program tersebut akan tetap berjalan, dan tidak mengalami kerusakan apa pun. Namun, jika program Anda memuat banyak kode semacam ini, program tersebut mungkin berjalan lebih lambat daripada yang seharusnya.
*/