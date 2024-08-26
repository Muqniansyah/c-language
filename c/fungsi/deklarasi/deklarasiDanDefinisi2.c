// contoh menuliskan deklarasi dan definisi fungsi dengan parameter.

#include <stdio.h>

// Function declaration
int myFunction(int x, int y);

// The main method
int main() {  
  int result = myFunction(5, 3);  // panggil fungsinya
  printf("Hasilnya adalah = %d", result);

  return 0;
}

// Function definition
int myFunction(int x, int y) {
  return x + y;
}