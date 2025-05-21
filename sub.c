#include <stdio.h>

int main() {
    int arr[5] = {5, 10, 15, 20, 25};
    int *ptr = &arr[3]; // points to 20

    printf("Before: *ptr = %d\n", *ptr);  // 20

    ptr = ptr - 2;

    printf("After: *ptr = %d\n", *ptr);   // 10
    return 0;
}
