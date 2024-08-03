#include <stdio.h>

int main() {
  printf("Hello World!");
  return 0;
}



/*
Baris 1: #include <stdio.h> adalah pustaka berkas header yang memungkinkan kita bekerja dengan fungsi input dan output, seperti printf()(digunakan pada baris 4). Berkas header menambahkan fungsionalitas ke program C.

#include stdio.h merupakan kode awal yang biasanya digunakan untuk membuat program dengan menggunakan bahasa pemrograman C.
Jangan khawatir jika Anda tidak mengerti cara  #include <stdio.h>kerjanya. Anggap saja itu sebagai sesuatu yang (hampir) selalu muncul dalam program Anda.

Baris 2: Baris kosong. C mengabaikan spasi. Namun, kita menggunakannya untuk membuat kode lebih mudah dibaca.
Baris 3: Hal lain yang selalu muncul dalam program C adalah main(). Ini disebut fungsi . Kode apa pun di dalam kurung kurawalnya {}akan dieksekusi.
Baris 4: printf() adalah fungsi bawaan yang digunakan untuk menampilkan/mencetak teks ke layar. Dalam contoh kita, akan ditampilkan "Hello World!".

Perhatikan bahwa: Setiap pernyataan C diakhiri dengan titik koma;
Penting bagi Anda untuk mengakhiri pernyataan dengan titik koma;
Jika Anda lupa titik koma ( ;), kesalahan akan terjadi dan program tidak akan berjalan

Catatan: Isinya int main()juga dapat ditulis sebagai:
int main(){printf("Hello World!");return 0;}

Ingat: Kompiler mengabaikan spasi. Namun, beberapa baris membuat kode lebih mudah dibaca.

Baris 5: return 0 mengakhiri main() fungsi.
Baris 6: Jangan lupa menambahkan kurung kurawal penutup }untuk benar-benar mengakhiri fungsi utama.
*/