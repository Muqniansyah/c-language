// Jika jumlah memori yang Anda simpan tidak cukup, Anda dapat mengalokasikannya kembali untuk membuatnya lebih besar.
// Realokasi cadangan sejumlah memori yang berbeda (biasanya lebih besar) sambil tetap menjaga data yang tersimpan di dalamnya. Anda dapat mengubah ukuran memori yang dialokasikan dengan realloc()fungsi tersebut.

#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("contoh meningkatkan ukuran memory yang dialokasikan \n");
    int *ptr1, *ptr2, size;

    // Alokasikan memori untuk empat bilangan bulat
    size = 4 * sizeof(*ptr1);
    ptr1 = malloc(size);

    printf("%d byte dialokasikan di alamat %p \n", size, ptr1);

    // Ubah ukuran memori untuk menampung enam bilangan bulat
    size = 6 * sizeof(*ptr1);
    ptr2 = realloc(ptr1, size);

    printf("%d byte dialokasikan kembali di alamat %p \n\n", size, ptr2);

    printf("Pointer NULL dan Pemeriksaan Kesalahan \n");
    // Fungsi ini realloc()mengembalikan NULL pointer jika tidak dapat mengalokasikan lebih banyak memori. Hal ini sangat tidak mungkin terjadi, tetapi perlu diingat ketika Anda ingin kode Anda anti-gagal.
    // Contoh berikut memeriksa apakah realloc() dapat mengubah ukuran memori atau tidak, dengan memeriksa penunjuk NULL
    int *ptr3, *ptr4;

    // Alokasikan memori
    ptr3 = malloc(4);

    // Cobalah untuk mengubah ukuran memori
    ptr4 = realloc(ptr3, 8);

    // Periksa apakah realloc dapat mengubah ukuran memori atau tidak
    if (ptr4 == NULL) {
        // Jika realokasi gagal
        printf("Gagal. Tidak dapat mengubah ukuran memori");
    } else {
        // Jika realokasi berhasil
        printf("Kesuksesan. 8 byte dialokasikan kembali di alamat %p \n", ptr4);
        ptr3 = ptr4; // Perbarui ptr3 untuk menunjuk ke memori yang baru dialokasikan
    }

    // Anda harus selalu menyertakan pemeriksaan kesalahan (jika pointer == NULL) saat mengalokasikan memori.
    // Anda juga harus selalu membebaskan, atau melepaskan, memori yang dialokasikan saat Anda selesai menggunakannya. Hal ini penting untuk memastikan bahwa program Anda berperilaku seperti yang diharapkan, tetapi juga akan membuatnya lebih mudah dirawat dan efisien. Untuk mengosongkan memori, cukup gunakan free() fungsi
    
    return 0;
}