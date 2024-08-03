// penggunaan tipe data berbeda untuk menghitung dan mengeluarkan total biaya sejumlah item

#include <stdio.h>

int main() {
    // Buat variabel dengan tipe data berbeda
    int items = 50;
    float cost_per_item = 9.99;
    float total_cost = items * cost_per_item;
    char currency = '$';

    // cetak variablenya
    printf("Number of items: %d \n", items);
    printf("Cost per item: %.2f %c \n", cost_per_item, currency);
    printf("Total cost = %.2f %c \n", total_cost, currency);

    return 0;
}