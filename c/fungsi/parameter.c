#include <stdio.h>

// char name[] adalah parameter bertipe string
void myFunction(char name[]) {
    printf("Hello %s \n", name);
}

int main() {
    // Liam, Jenny dan Anja adalah argumen 
    myFunction("Liam");
    myFunction("Jenny");
    myFunction("Anja");
    return 0;
}