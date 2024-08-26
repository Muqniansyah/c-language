// Untuk pengoptimalan kode, disarankan untuk memisahkan deklarasi dan definisi fungsi.
// Anda akan sering melihat program C yang memiliki deklarasi fungsi di atas main(), dan definisi fungsi di bawah main(). Ini akan membuat kode lebih terorganisasi dan lebih mudah dibaca.

#include <stdio.h>

// Function declaration
void myFunction();

// The main method
int main() {
  myFunction();  // panggil fungsinya

  return 0;
}

// Function definition
void myFunction() {
  printf("Saya baru saja dieksekusi!");
}