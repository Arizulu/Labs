/*
    Студент Ванин К.А.
    Группа: ПИ 1-1
    Назначение: вычисление площади и периметра прямоугольника
*/
    
#include <stdio.h>

int main(void) {
    double a, b;
    double area, perimeter;
	printf("========================================\n");
	printf("    ПАРАМЕТРЫ ПРЯМОУГОЛЬНИКА\n");
	printf("========================================\n");
    
    scanf("%lf %lf", &a, &b);
    if (a < 0 || b < 0) {
        printf("Не может быть отрицательным\n");
    }
    else { 
        printf("Введите длину и ширину: %.2f %.2f\n", a, b);
    
        area = a * b;
        perimeter = 2.0 * (a + b);
    
        printf("Длина:  %.2f\n", a);
        printf("Ширина:  %.2f\n", b);
        printf("Площадь:  %.2f\n", area);
        printf("Периметр:  %.2f\n", perimeter);
        printf("Расчёт завершён успешно\n");
    }
    return 0;
}

