// contoh praktis memori dinamis yaitu membuat program yang dapat membuat daftar dengan panjang berapa pun.
// Array reguler di C memiliki panjang yang tetap dan tidak dapat diubah, tetapi dengan memori dinamis kita dapat membuat daftar selama yang kita inginkan

#include <stdio.h>
#include <stdlib.h>

struct list {
  int *data; // Menunjuk ke memori tempat item daftar disimpan
  int numItems; // Menunjukkan berapa banyak item yang saat ini ada dalam daftar
  int size; // Menunjukkan berapa banyak item yang muat dalam memori yang dialokasikan
};

void addToList(struct list *myList, int item);

int main() {
    struct list myList;
    int amount;

    // Buat daftar dan mulai dengan ruang yang cukup untuk 10 item
    myList.numItems = 0;
    myList.size = 10;
    myList.data = malloc(myList.size * sizeof(int));

    // Cari tahu apakah alokasi memori berhasil
    if (myList.data == NULL) {
        printf("Memory allocation failed");
        return 1; // Keluar dari program dengan kode kesalahan
    }
    
    // Tambahkan sejumlah item ke daftar yang ditentukan oleh variabel jumlah
    amount = 44;
    for (int i = 0; i < amount; i++) {
        addToList(&myList, i + 1);
    }

    // Menampilkan isi daftar
    for (int j = 0; j < myList.numItems; j++) {
        printf("%d ", myList.data[j]);
    }

    // Kosongkan memori saat tidak diperlukan lagi
    free(myList.data);
    myList.data = NULL;
    
    return 0;
}

// Fungsi ini menambahkan item ke daftar
void addToList(struct list *myList, int item) {
    // Jika daftarnya penuh maka ubah ukuran memori agar muat 10 item lagi
    if (myList->numItems == myList->size) {
        myList->size += 10;
        myList->data = realloc( myList->data, myList->size * sizeof(int) );
    }

    // Tambahkan item ke akhir daftar
    myList->data[myList->numItems] = item;
    myList->numItems++;
}

/*
Penunjuk ke struktur: Contoh ini memiliki penunjuk ke struktur myList. 
Karena kita menggunakan penunjuk ke struktur, bukan struktur itu sendiri, kita menggunakan sintaks panah (->) 
untuk mengakses anggota struktur.
*/