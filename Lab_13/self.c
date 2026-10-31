#include <stdio.h>

int min_max(const int a[], int n, int *lo, int *hi) {
	    
	if (n <= 0) {
	    return 0;
	}
	    
	int min_val = a[0];
	int max_val = a[0];
	    
	for (int i = 1; i < n; i++) {
	    if (a[i] < min_val) {
	        min_val = a[i];
	    }
	    if (a[i] > max_val) {
	        max_val = a[i];
	    }
	}
	    
	*lo = min_val;
	*hi = max_val;
	
	return 1;
}

int main(void) {
    int array[] = {4, -2, 7};
    int lo, hi;
    
    lo = 99; hi = 99;
    if (min_max(array, 3, &lo, &hi)) {
        printf("Успех; lo=%d; hi=%d\n", lo, hi);
    } else {
        printf("Отказ; lo=%d; hi=%d\n", lo, hi);
    }
    
    lo = 99; hi = 99;
    if (min_max(array, 1, &lo, &hi)) {
        printf("Успех; lo=%d; hi=%d\n", lo, hi);
    } else {
        printf("Отказ; lo=%d; hi=%d\n", lo, hi);
    }
    
    lo = 99; hi = 99;
    if (min_max(array, 0, &lo, &hi)) {
        printf("Успех; lo=%d; hi=%d\n", lo, hi);
    } else {
        printf("Отказ; lo=%d; hi=%d\n", lo, hi);
    }
    int my_array[] = {10, -5, 2, -5, 15};
    lo = 99; hi = 99;
    if (min_max(my_array, 0, &lo, &hi)) {
        printf("Успех; lo=%d; hi=%d\n", lo, hi);
    } else {
        printf("Отказ; lo=%d; hi=%d\n", lo, hi);
    }
    
    return 0;
}
