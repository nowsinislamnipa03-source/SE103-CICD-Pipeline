#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    printf("Hello, CI/CD World!\n");

    if (add(5, 5) == 10) {
        printf("Test Success: 5 + 5 = 10\n");
        return 0;
    } else {
        printf("Test Failure!\n");
        return 1; 
    }
}
