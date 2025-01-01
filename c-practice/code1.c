#include <stdio.h>

int main() {
    char name[100];  // Allocate enough space for the name

    printf("Hello world\n");
    printf("Enter your name: ");
    scanf("%99s", name);  // Read the name, limiting input to avoid buffer overflow

    printf("Myself %s\n", name);
    return 0;
}
