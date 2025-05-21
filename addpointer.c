#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;  // points to arr[0]

    printf("Before: *ptr = %d\n", *ptr);  // 10

    ptr = ptr + 2;  // move forward by 2 elements

    printf("After: *ptr = %d\n", *ptr);   // 30
    return 0;
}
