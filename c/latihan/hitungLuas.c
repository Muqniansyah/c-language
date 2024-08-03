// Hitung Luas Persegi Panjang

#include <stdio.h>

int main() {
  // buat variable integer
  int length = 4;
  int width = 6;
  int area;

  // menghitung luas persegi panjang
  area = length * width;

  // cetak variablenya
  printf("Length is: %d\n", length);
  printf("Width is: %d\n", width);
  printf("Luas persegi panjang tersebut adalah : %d", area);

  return 0;
}