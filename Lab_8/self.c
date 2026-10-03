/*
    Студент Ванин К.А.
    Группа: ПИ 1-1
    Назначение: Замена всех вхождений
*/
#include <stdio.h>

int main(void) {
    int n;
	if (scanf("%d ;", &n) != 1) {
	    printf("Error");
	    return 1;
	}
	int arr[n];
	
	for (int i = 0; i < n; i++) {
	    if (scanf("%d", &arr[i]) != 1) {
	        printf("Error");
	        return 1;
	    }
	}
	
	
	int x, y;
	if (scanf("; x = %d, y = %d", &x, &y) != 2) {
	    printf("Error");
	    return 1;
	}
	
	int first = -1;
	int last = -1;
	int count = 0;
	
	for (int i = 0; i < n; i++) {
	    if (arr[i] == x) {
	        if (count == 0) {
	            first = i;
	        }
	        last = i;
	        count++;
	        arr[i] = y;
	    }
	}
	
	if (count > 0) {
	    printf("После:");
	    for (int i = 0; i < n; i++) {
	        printf(" %d", arr[i]);
	    }
	    printf("; count %d; first %d; last %d\n", count, first, last);
	}
	else {
	    printf("Массив прежний; Not found; count 0\n");
	}
	return 0;
}
