// Di dalam fungsi, Anda dapat menambahkan parameter sebanyak yang Anda inginkan

#include <stdio.h>

// char name[] dan int age adalah dua parameter yang satu bertipe string dan satu lagi bertipe int.
void myFunction(char name[], int age) {
    printf("Hello %s. Anda %d tahun \n", name, age);
}

int main() {
    // Liam, Jenny dan Anja adalah argumen pertama
    // 3, 14, dan 30 adalah argumen kedua
    myFunction("Liam", 3);
    myFunction("Jenny", 14);
    myFunction("Anja", 30);
    
    return 0;
}

/*
Perhatikan bahwa ketika Anda bekerja dengan beberapa parameter, 
pemanggilan fungsi harus memiliki jumlah argumen yang sama dengan jumlah parameter, 
dan argumen harus diteruskan dalam urutan yang sama.
*/