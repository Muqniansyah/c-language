// Jika Anda ingin mengubah/memodifikasi suatu nilai, Anda dapat menggunakan sintaksis titik (.).
// Dan untuk mengubah nilai string, strcpy() fungsinya berguna lagi

#include <stdio.h>
#include <string.h>

// Buat struktur
struct myStructure {
    int myNum;
    char myLetter;
    char myString[30];
};

int main() {
    // Buat variabel struktur dan berikan nilai padanya
    struct myStructure s1 = {13, 'B', "Some text"};
    
    // Ubah nilai
    s1.myNum = 30;
    s1.myLetter = 'C';
    strcpy(s1.myString, "Something else");

    // cetak nilai
    printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

    return 0;
}

/*
Baiklah, jadi, bagaimana struktur bermanfaat?
Bayangkan Anda harus menulis program untuk menyimpan berbagai informasi tentang Mobil, seperti merek, model, dan tahun. 
Hebatnya struktur adalah Anda dapat membuat satu "templat Mobil" dan menggunakannya untuk setiap mobil yang Anda buat. 
Lihat di bawah untuk contoh nyata.
*/