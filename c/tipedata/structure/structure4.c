// Anda juga dapat menetapkan nilai ke anggota variabel struktur pada waktu deklarasi, dalam satu baris.
// Cukup masukkan nilai dalam daftar yang dipisahkan koma di dalam kurung kurawal {}. Perhatikan bahwa Anda tidak perlu menggunakan strcpy() fungsi untuk nilai string dengan teknik ini.

#include <stdio.h>

// Buat struktur
struct myStructure {
    int myNum;
    char myLetter;
    char myString[30];
};

int main() {
    // Buat variabel struktur dan berikan nilai padanya
    struct myStructure s1 = {13, 'B', "Some text"};

    // cetak nilai
    printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

    //  Urutan nilai yang dimasukkan harus sesuai dengan urutan tipe variabel yang dideklarasikan dalam struktur (13 untuk int, 'B' untuk char, dll).

    return 0;
}