// Manajemen memori adalah proses menangani berapa banyak memori yang digunakan suatu program melalui berbagai operasi.

#include <stdio.h>

int main() {
    // Memahami cara kerja memori dalam C itu penting. Saat Anda membuat variabel dasar, C akan secara otomatis menyediakan ruang untuk variabel tersebut. 
    // int Misalnya, variabel biasanya akan menempati 4 byte memori, sedangkan double variabel akan menempati 8 byte memori. Anda dapat menggunakan sizeof operator untuk menemukan ukuran berbagai jenis.
    
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;
    
    printf("%lu \n", sizeof(myInt)); // 4 bytes
    printf("%lu \n", sizeof(myFloat)); // 4 bytes
    printf("%lu \n", sizeof(myDouble)); // 8 bytes
    printf("%lu \n", sizeof(myChar)); // 1 byte
    
    return 0;
}