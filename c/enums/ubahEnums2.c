// Perlu diingat bahwa jika Anda menetapkan nilai pada satu item tertentu, item berikutnya akan memperbarui nomornya sesuai dengan nilai tersebut

#include <stdio.h>

enum Level {
    LOW = 5,
    MEDIUM, // 6
    HIGH // 7
};

int main() {
    enum Level myVar = MEDIUM;
    printf("%d", myVar);
    
    return 0;
}