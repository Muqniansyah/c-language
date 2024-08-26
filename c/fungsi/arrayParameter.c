// Melewati Array sebagai Parameter Fungsi. Anda juga dapat meneruskan array ke suatu fungsi

#include <stdio.h>

void myFunction(int myNumbers[5]) {
    for (int i = 0; i < 5; i++) {
        printf("%d\n", myNumbers[i]);
    }
}

int main() {
    int myNumbers[5] = {10, 20, 30, 40, 50};  
    myFunction(myNumbers);
    return 0;
}

/*
Fungsi ( myFunction) mengambil array sebagai parameternya ( int myNumbers[5]), dan melakukan perulangan melalui elemen-elemen array dengan for loop.
Ketika fungsi tersebut dipanggil di dalam main(), kita meneruskan array myNumbers , yang akan menampilkan elemen-elemen array.
Perhatikan bahwa ketika Anda memanggil fungsi tersebut, Anda hanya perlu menggunakan nama array saat meneruskannya sebagai argumen myFunction(myNumbers). Namun, deklarasi array secara lengkap diperlukan dalam parameter fungsi ( int myNumbers[5]).
*/