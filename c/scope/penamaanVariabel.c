// Jika Anda beroperasi dengan nama variabel yang sama di dalam dan di luar suatu fungsi, 
// C akan memperlakukannya sebagai dua variabel terpisah; Satu tersedia dalam lingkup global (di luar fungsi) dan satu tersedia dalam lingkup lokal (di dalam fungsi)

#include <stdio.h>

int x = 5; // Variabel global x

void myFunction() {
    // Variabel lokal dengan nama yang sama dengan variabel global
    int x = 22;
    printf("%d \n", x); // Mengacu pada variabel lokal x
}

int main() {
    myFunction();

    printf("%d \n", x); // Mengacu pada variabel global x

    // Namun, Anda harus menghindari penggunaan nama variabel yang sama untuk variabel global dan lokal karena dapat menimbulkan kesalahan dan kebingungan.
    // Secara umum, Anda harus berhati-hati dengan variabel global, karena variabel tersebut dapat diakses dan dimodifikasi dari fungsi apa pun
    return 0;
}

/*
Singkatnya, gunakan variabel lokal (dengan nama variabel yang baik) sebanyak mungkin. Ini akan membuat kode Anda lebih mudah dikelola dan lebih mudah dipahami. 
Namun, Anda mungkin menemukan variabel global saat mengerjakan program C yang sudah ada atau saat berkolaborasi dengan orang lain. Oleh karena itu, ada baiknya untuk memahami cara kerja cakupan dan cara menggunakannya secara efektif untuk memastikan kode Anda jelas dan berfungsi.
*/