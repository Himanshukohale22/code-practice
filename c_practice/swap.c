// Author : Himanshu Kohale (Himanshukohale22@github)/Binarylinux

#include <stdio.h>

// Function to swap two integers using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;

    // Input values for a and b
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    // Swap the values
    swap(&a, &b);

    // Output the swapped values
    printf("Swapped variables: a = %d, b = %d\n", a, b);

    return 0;
}
