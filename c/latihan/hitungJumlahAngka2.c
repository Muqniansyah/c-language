#include <stdio.h>

// kita dapat menggunakan return dan menyimpan hasilnya dalam variabel yang berbeda. Ini akan membuat program lebih fleksibel dan lebih mudah dikendalikan.
int calculateSum(int x, int y) {
    return x + y;
}

int main() {
    int result1 = calculateSum(5, 3);
    int result2 = calculateSum(8, 2);
    int result3 = calculateSum(15, 15);

    printf("Result1 is: %d \n", result1);
    printf("Result2 is: %d \n", result2);
    printf("Result3 is: %d \n\n", result3);

    // Jika Anda memiliki banyak "variabel hasil", lebih baik menyimpan hasilnya dalam sebuah array
    printf("contoh menyimpan hasilnya dalam sebuah array \n");
    // Buat sebuah array
    int resultArr[6];

    // Panggil fungsi dengan argumen berbeda dan simpan hasil berbeda ke dalam array
    resultArr[0] = calculateSum(5, 3);
    resultArr[1] = calculateSum(8, 2);
    resultArr[2] = calculateSum(15, 15);
    resultArr[3] = calculateSum(9, 1);
    resultArr[4] = calculateSum(7, 7);
    resultArr[5] = calculateSum(1, 1);

    for (int i = 0; i < 6; i++) {
        printf("Result %d is = %d \n", i + 1, resultArr[i]);
    }

    return 0;
}