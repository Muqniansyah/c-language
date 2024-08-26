// Variabel yang dibuat di luar suatu fungsi disebut variabel global dan termasuk dalam cakupan global.
// Variabel global tersedia dari dalam cakupan apa pun, global dan lokal.

#include <stdio.h>

// Variabel global x
int x = 5;

void myFunction() {
  // Kita bisa menggunakan x di sini
  printf("%d \n", x);
}

int main() {
  myFunction();

  // Kita juga bisa menggunakan x di sini
  printf("%d \n", x);
  return 0;
}