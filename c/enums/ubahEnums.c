// Seperti yang Anda ketahui, item pertama enum memiliki nilai 0. Item kedua memiliki nilai 1, dan seterusnya.
// Untuk lebih memahami nilai-nilai tersebut, Anda dapat mengubahnya dengan mudah
#include <stdio.h>

enum Level {
    LOW = 25,
    MEDIUM = 50,
    HIGH = 75
};

int main() {
    enum Level myVar = MEDIUM;
    printf("%d", myVar);
    
    return 0;
}