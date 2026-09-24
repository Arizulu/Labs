/*
    Студент Ванин К.А.
    Группа: ПИ 1-1
    Назначение: Конвертация велечин
*/

#include <stdio.h>

int main(void) {
    double value, result;
    int command;
    printf("Конвертер величин\n");
    if (scanf("%lf", &value) != 1) {
        printf("Ошибка: введено некорректное значение.\n");
        return 1;
    }
    printf("Выберите преобразование:\n");
    printf("1 — метры в сантиметры\n");
    printf("2 — килограммы в граммы\n");
    printf("3 — градусы Цельсия в градусы Фаренгейта\n");
    printf("4 — часы в минуты\n");
    printf("Введите номер команды: ");
    if (scanf("%d", &command) != 1) {
        printf("Ошибка: введена некорректная команда.\n");
        return 1;
    }
    if ((command == 1 || command == 2 || command == 4) && value < 0) {
        printf("Ошибка: значение не может быть отрицательным.\n");
        return 1;
    }

    switch (command) {
        case 1:
            result = value * 100.0;
            printf("%.2f м = %.2f см\n", value, result);
            break;

        case 2:
            result = value * 1000.0;
            printf("%.2f кг = %.2f г\n", value, result);
            break;

        case 3:
            result = value * 9.0 / 5.0 + 32.0;
            printf("%.2f °C = %.2f °F\n", value, result);
            break;

        case 4:
            result = value * 60.0;
            printf("%.2f ч = %.2f мин\n", value, result);
            break;

        default:
            printf("Ошибка: неизвестная команда.\n");
    }

    return 0;
}