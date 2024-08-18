// Operator digunakan untuk melakukan operasi pada variabel dan nilai.

#include <stdio.h>

int main() {
    // operator aritmatika
    // Operator aritmatika digunakan untuk melakukan operasi matematika umum.
    int x = 4;
    int y = 2;

    printf("contoh operator aritmatika \n");
    printf("x adalah %d \n", x);
    printf("y adalah %d \n", y);
    printf("penjumlahan : %d \n", x + y);
    printf("pengurangan : %d \n", x - y);
    printf("perkalian : %d \n", x * y);
    printf("pembagian : %d \n", x / y);
    printf("modulus : %d \n", x % y); // mengembalikan sisa pembagian
    printf("increment : %d \n", ++x); // menambah nilai variabel sebesar 1
    printf("decrement : %d \n\n", --x); // mengurangi nilai variabel sebesar 1

    // operator penugasan
    // Operator penugasan digunakan untuk menetapkan nilai ke variabel.
    int z = 5; // sama dengan 	z = 5
    
    printf("contoh operator penugasan \n");
    printf("z adalah %d \n", z);
    printf("contoh = : %d \n", z);
    z += 3; // sama dengan 	z = z + 3
    printf("contoh += : %d \n", z);
    z -= 3; // sama dengan 	z = z - 3
    printf("contoh -= : %d \n", z);
    z *= 3; // sama dengan 	z = z * 3
    printf("contoh *= : %d \n", z);
    z /= 3; // sama dengan 	z = z / 3
    printf("contoh /= : %d \n", z);
    z %= 3; // sama dengan 	z = z % 3
    printf("contoh %= : %d \n", z); // Modulus Assignment (%=)
    z &= 3; // sama dengan 	z = z & 3
    printf("contoh &= : %d \n", z); // Bitwise AND Assignment (&=)
    z |= 3; // sama dengan 	z = z | 3
    printf("contoh |= : %d \n", z); // Bitwise OR Assignment (|=)
    z ^= 3; // sama dengan 	z = z ^ 3
    printf("contoh ^= : %d \n", z); // Bitwise XOR Assignment (^=)
    z >>= 3; // sama dengan z = z >> 3
    printf("contoh >>= : %d \n", z); // Right Shift Assignment (>>=)
    z <<= 3; // sama dengan z = z << 3
    printf("contoh <<= : %d \n\n", z); // Left Shift Assignment (<<=)

    // operator perbandingan
    // Operator perbandingan digunakan untuk membandingkan dua nilai (atau variabel). Hal ini penting dalam pemrograman, karena membantu kita menemukan jawaban dan membuat keputusan.
    // Nilai balik dari perbandingan adalah 1atau 0, yang berarti benar ( 1) atau salah ( 0). Nilai-nilai ini dikenal sebagai nilai Boolean
    int a = 5;
    int b = 5;
    
    printf("contoh operator perbandingan \n");
    printf("a adalah %d \n", a);
    printf("b adalah %d \n", b);
    printf("contoh == : %d \n", a == b); // sama dengan yang mengembalikan 1 jika nilai tersebut sama
    printf("contoh != : %d \n", a != b); // tidak sama dengan yang mengembalikan 1 jika nilai tersebut tidak sama
    printf("contoh > : %d \n", a > b); // lebih besar dari yang mengembalikan 1 jika nilai pertama lebih besar dari nilai kedua
    printf("contoh < : %d \n", a < b); // lebih kecil dari yang mengembalikan 1 jika nilai pertama lebih kecil dari nilai kedua
    printf("contoh >= : %d \n", a >= b); // lebih besar dari atau sama dengan yang mengembalikan 1 jika nilai pertama lebih besar dari atau sama dengan nilai kedua
    printf("contoh <= : %d \n\n", a <= b); // lebih kecil dari atau sama dengan yang mengembalikan 1 jika nilai pertama lebih kecil dari atau sama dengan nilai kedua

    // operator logika
    // Operator logika digunakan untuk menentukan logika antara variabel atau nilai, dengan menggabungkan beberapa kondisi
    // Anda juga dapat menguji nilai benar atau salah dengan operator logika.
    int c = 5;
    int d = 3;
    
    printf("contoh operator logika \n");
    printf("c adalah %d \n", c);
    printf("d adalah %d \n", d);
    printf("contoh && : %d \n", c > 3 && c < 10); // AND (&&) yang mengembalikan 1 jika kedua pernyataan benar
    printf("contoh || : %d \n", c > 3 || c < 4); // OR (||) yang mengembalikan 1 jika salah satu pernyataan benar
    printf("contoh ! : %d \n", !( c > 3 && c < 10)); // NOT (!) yang membalikkan hasil, mengembalikan 0 jika hasilnya 1

    return 0;
}