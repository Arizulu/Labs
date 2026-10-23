#include <stdio.h>

#define MAX_SIZE 100 /* Максимально допустимое количество элементов */

int inputArray(int array[], int size);
void printArray(const int array[], int size);
int findMin(const int array[], int size);
int findMinIndex(const int array[], int size);
int findMax(const int array[], int size);
int findMaxIndex(const int array[], int size);
long long calculateSum(const int array[], int size);
double calculateAverage(const int array[], int size);
void printSignsCount(const int array[], int size);
void printParityCount(const int array[], int size);
void printRangeElements(const int array[], int size, int a, int b);
int isSymmetric(const int array[], int size);
void performIndividualTask(const int array[], int size);

/* main управляет порядком выполнения программы. */
int main(void)
{
    int array[MAX_SIZE]; /* Здесь хранятся введённые числа. */
    int size;
    int a;
    int b;

    printf("Введите размер массива от 1 до %d: ", MAX_SIZE);
    if (scanf("%d", &size) != 1 || size < 1 || size > MAX_SIZE)
    {
        printf("Ошибка: недопустимый размер массива.\n");
        return 1;
    }

    if (!inputArray(array, size))
    {
        return 1;
    }
    printf("\nИсходный массив: ");
    printArray(array, size);

    printf("Минимальный элемент: %d, первый индекс: %d\n",
           findMin(array, size), findMinIndex(array, size));
    printf("Максимальный элемент: %d, первый индекс: %d\n",
           findMax(array, size), findMaxIndex(array, size));
    printf("Сумма элементов: %lld\n", calculateSum(array, size));
    printf("Среднее арифметическое: %.2f\n", calculateAverage(array, size));

    printSignsCount(array, size);
    printParityCount(array, size);

    printf("Введите границы диапазона a и b: ");
    if (scanf("%d %d", &a, &b) != 2)
    {
        printf("Ошибка: необходимо ввести два целых числа.\n");
        return 1;
    }
    if (a > b)
    {
        printf("Ошибка: левая граница a не должна быть больше b.\n");
        return 1;
    }

    printRangeElements(array, size, a, b);
    performIndividualTask(array, size);

    return 0;
}

int inputArray(int array[], int size)
{
    int i;

    printf("Введите %d целых элементов массива:\n", size);
    for (i = 0; i < size; i++)
    {
        printf("array[%d] = ", i);
        if (scanf("%d", &array[i]) != 1)
        {
            printf("Ошибка: элемент должен быть целым числом.\n");
            /* Завершаем программу, чтобы не обрабатывать неполный массив. */
            return 0;
        }
    }
    return 1;
}

/* Выводит все элементы массива в одной строке. const запрещает менять элементы. */
void printArray(const int array[], int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%d", array[i]);
        if (i + 1 < size)
        {
            printf(" ");
        }
    }
    printf("\n");
}

/* Ищет минимальное значение массива. */
int findMin(const int array[], int size)
{
    int minValue = array[0];
    int i;

    for (i = 1; i < size; i++)
    {
        if (array[i] < minValue)
        {
            minValue = array[i];
        }
    }
    return minValue;
}

int findMinIndex(const int array[], int size)
{
    int minIndex = 0;
    int i;

    for (i = 1; i < size; i++)
    {
        if (array[i] < array[minIndex])
        {
            minIndex = i;
        }
    }
    return minIndex;
}

/* Ищет максимальное значение массива. */
int findMax(const int array[], int size)
{
    int maxValue = array[0];
    int i;

    for (i = 1; i < size; i++)
    {
        if (array[i] > maxValue)
        {
            maxValue = array[i];
        }
    }
    return maxValue;
}

int findMaxIndex(const int array[], int size)
{
    int maxIndex = 0;
    int i;

    for (i = 1; i < size; i++)
    {
        if (array[i] > array[maxIndex])
        {
            maxIndex = i;
        }
    }
    return maxIndex;
}

/* Считает сумму; long long позволяет хранить более крупную сумму, чем int. */
long long calculateSum(const int array[], int size)
{
    long long sum = 0;
    int i;

    for (i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum;
}

/* Приведение к double обеспечивает вещественное деление. */
double calculateAverage(const int array[], int size)
{
    return (double)calculateSum(array, size) / size;
}

/* Подсчитывает положительные, отрицательные элементы и нули. */
void printSignsCount(const int array[], int size)
{
    int positive = 0;
    int negative = 0;
    int zero = 0;
    int i;

    for (i = 0; i < size; i++)
    {
        if (array[i] > 0)
        {
            positive++;
        }
        else if (array[i] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }

    printf("Положительных: %d, отрицательных: %d, нулевых: %d\n",
           positive, negative, zero);
}

/* Чётность определяется по остатку от деления на 2. */
void printParityCount(const int array[], int size)
{
    int even = 0;
    int odd = 0;
    int i;

    for (i = 0; i < size; i++)
    {
        if (array[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Чётных: %d, нечётных: %d\n", even, odd);
}

/* Печатает элементы, удовлетворяющие условию a <= array[i] <= b. */
void printRangeElements(const int array[], int size, int a, int b)
{
    int i;
    int found = 0;

    printf("Элементы в диапазоне [%d, %d]: ", a, b);
    for (i = 0; i < size; i++)
    {
        if (array[i] >= a && array[i] <= b)
        {
            printf("%d ", array[i]);
            found = 1;
        }
    }

    if (!found)
    {
        printf("нет элементов");
    }
    printf("\n");
}

/* Вариант 8: сравнивает парные элементы с двух концов массива. */
int isSymmetric(const int array[], int size)
{
    int left = 0;         /* Индекс слева. */
    int right = size - 1; /* Индекс справа. */

    while (left < right)
    {
        /* Одного несовпадения достаточно, чтобы признать массив несимметричным. */
        if (array[left] != array[right])
        {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}

/* Выводит результат индивидуального задания на основе isSymmetric. */
void performIndividualTask(const int array[], int size)
{
    if (isSymmetric(array, size))
    {
        printf("Массив симметричный.\n");
    }
    else
    {
        printf("Массив несимметричный.\n");
    }
}
