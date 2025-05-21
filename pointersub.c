#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *start = &arr[1];  // arr[1] = 2
    int *end = &arr[4];    // arr[4] = 5

    int diff = end - start;
    printf("Difference = %d\n", diff);   // 3
    return 0;
}
