/*
    Студент Ванин К.А.
    Группа: ПИ 1-1
    Назначение: Статистика последовательности
*/

#include <stdio.h>

int main() {
    int num;
    long long sum = 0;
    int count = 0;
    int pos_count = 0;

    printf("Введите целые числа от -1000 до 1000.\n");
    printf("Для завершения введите 0.\n");

    while (count < 100) {
        if (scanf("%d", &num) != 1) {
            printf("Ошибка ввода\n");
            break;
        }
        if (num == 0) {
            break;
        }
        if (num < -1000 || num > 1000) {
            printf("Ошибка диапозона\n");
            continue;
        }
        
        count++;
        sum += num;
        if (num > 0) {
            pos_count++;
        }
    }
    
    printf("Принято чисел: %d\n", count);
    printf("Сумма: %lld\n", sum);
    printf("Положительных: %d\n", pos_count);
    return 0;
}