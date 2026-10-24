#include <stdio.h>

int count_above(const int a[], int n, int limit) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > limit) {
            count++;
        }
    }
    return count;
}

int main(void) {
    int array[] = {4, -2, 7, 0};
    
    printf("Test 1: %d\n", count_above(array, 4, 0));
    printf("Test 2: %d\n", count_above(array, 4, 7));
    printf("Test 3: %d\n", count_above(array, 2, 3));
    printf("Test 4: %d\n", count_above(array, 0, 0));
    printf("Test personal: %d\n", count_above(array, 5, 5));
    return 0;
}
