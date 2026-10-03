/*
    Студент Ванин К.А.
    Группа: ПИ 1-1
    Назначение: Одномерные массивы и статистика элементов
*/

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d;", &n) != 1 || n <= 0) {
        printf("Ошибка");
        return 1;
    }
    int a[n], b[n];

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &a[i]) != 1) {
            printf("Ошибка");
            return 1;
        }
    }
    
    int count = 0;
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            b[i] = 0;
            count++;
        }
        else {
            b[i] = a[i];
        }
        sum += b[i];
    }
    printf("b: ");
    for (int i = 0; i < n; i++) {
        printf(" %d;", b[i]);
    }
    printf("замен %d; сумма %d; a сохранен\n ", count, sum);
    return 0;
}
