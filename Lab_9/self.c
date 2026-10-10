#include <stdio.h>

int main() {
	int row, col;
	
	if (scanf("%d %d", &row, &col) != 2) {
	    printf("error");
	    return 1;
	}
	
	if (row <= 0 || col <= 0) {
	    printf("error");
	    return 1;
	}
	
	int a[row][col];
	
	for (int r = 0; r < row; r++) {
	    for (int c = 0; c < col; c++) {
	        if (scanf("%d", &a[r][c]) != 1) {
	            printf("error");
	            return 1; 
	        }
	    }
	}
	
	printf("Столбцы");
	
	for (int c = 0; c < col; c++) {
	    int col_sum = 0;
	    for (int r = 0; r < row; r++) {
	        col_sum += a[r][c];
	    }
	    printf("%d", col_sum);
	}
	
	int min_sum = 0;
	
	for (int c = 0; c < col; c++) {
	    min_sum += a[0][c];
	}
	
	int min_row = 0;
	
	for (int r = 1; r < row; r++) {
	    int row_sum = 0;
	    
	    for (int c = 0; c < col; c++) {
	        row_sum += a[r][c];
	    }
	    
	    if (row_sum < min_sum) {
	        min_sum = row_sum;
	        min_row = r;
	    }
	}
	
	printf("; строка %d; ее сумма %d\n", min_row, min_sum);
	return 0;
}

