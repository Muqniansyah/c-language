// Daripada menulis banyakif..else pernyataan, Anda dapat menggunakan switch pernyataan.
// Pernyataan tersebut switch memilih satu dari banyak blok kode yang akan dieksekusi

#include <stdio.h>

int main() {
    int day = 4;
    
    switch (day) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        // Kata kunci tersebut default menentukan beberapa kode untuk dijalankan jika tidak ada kecocokan huruf besar/kecil
        // Kata kunci default harus digunakan sebagai pernyataan terakhir dalam switch, dan tidak memerlukan jeda.
        default:
            printf("Menantikan akhir pekan");
    }
        
    return 0;
}

// Ketika C mencapai suatu break kata kunci, ia keluar dari blok switch. Ini akan menghentikan eksekusi lebih lanjut kode dan pengujian kasus di dalam blok.
// Bila kecocokan ditemukan dan pekerjaan selesai, saatnya untuk istirahat. Tidak perlu pengujian lebih lanjut. Sebuah break dapat menghemat banyak waktu eksekusi karena ia "mengabaikan" eksekusi semua kode lainnya di blok switch.