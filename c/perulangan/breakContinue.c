// Anda juga dapat menggunakan break dan continue dalam while loop 

#include <stdio.h>

int main() {
    // contoh break pada while loop
    printf("contoh break pada while loop \n");
    int i = 0;
    
    while (i < 10) {
        if (i == 4) {
        break;
        }
        printf("%d \n", i);
        i++;
    } 

    // contoh continue pada while loop
    printf("contoh continue pada while loop \n");
    int j = 0;
    
    while (j < 10) {
        if (j == 4) {
        j++;
        continue;
        }
        printf("%d \n", j);
        j++;
    } 

    return 0;
}