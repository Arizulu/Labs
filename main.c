#include <stdio.h>

int main() {
    int age;
	scanf("%d", &age);
    if (age < 1 || age > 120)
    {
        printf("сообщение \"Некорректный возраст\"\n");
    }
    else if (age >= 0 && age <= 6)
    {
        printf("билет бесплатный");
    }
    else if (age >= 7 && age <= 17)
    {
        printf("Ребенок - ");
        printf("стоимость 150 рублей");
    }
    else if (age >= 18 && age <= 59)
    {
        printf("стоимость 300 рублей");
    }
    else
    {
        printf("стоимость 180 рублей");
    }
    return 0;
}

