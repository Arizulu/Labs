#include <stdio.h>
int min2(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int max2(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int range3(int x, int y, int z) {
    int max_val = max2(max2(x, y), z);
    int min_val = min2(min2(x, y), z);
    return max_val - min_val;
}

int main(void) {
    int x, y, z;
    if (scanf("%d %d %d", &x, &y, &z) != 3) {
        printf("Ошибка: некорректный ввод чисел.\n");
        return 1;
    }

    if (x < -1000 || x > 1000 || 
        y < -1000 || y > 1000 || 
        z < -1000 || z > 1000) {
        printf("Ошибка: числа должны быть в диапазоне от -1000 до 1000.\n");
        return 1;
    }

    printf("%d\n", range3(x, y, z));
    return 0;
}
