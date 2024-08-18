// Ketika suatu variabel dibuat dalam C, alamat memori ditetapkan pada variabel tersebut. Alamat memori adalah lokasi tempat variabel disimpan di komputer.
// Ketika kita menetapkan nilai pada variabel, nilai itu disimpan di alamat memori ini. Untuk mengaksesnya, gunakan operator referensi ( &), dan hasilnya menunjukkan tempat variabel disimpan.

#include <stdio.h>

int main() {
    int myAge = 43;
    printf("%p", &myAge);
    return 0;
}

/*
Alamat memori dalam bentuk heksadesimal (0x..). Anda mungkin tidak akan mendapatkan hasil yang sama dalam program Anda, karena ini bergantung pada tempat penyimpanan variabel di komputer Anda.
Anda juga harus memperhatikan bahwa &myAgesering disebut "pointer". Pointer pada dasarnya menyimpan alamat memori suatu variabel sebagai nilainya. Untuk mencetak nilai pointer, kita menggunakan %ppenentu format.
Pointer penting dalam C, karena memungkinkan kita memanipulasi data dalam memori komputer - ini dapat mengurangi kode dan meningkatkan kinerja.
Pointer adalah salah satu hal yang membuat C menonjol dari bahasa pemrograman lain, seperti Python dan Java.
*/

