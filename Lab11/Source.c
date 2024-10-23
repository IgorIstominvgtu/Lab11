
#include <locale.h>
#include <stdio.h>
#define N 10

float task1()
{
    setlocale(LC_ALL, "RUS");
    float original[N];
    float A[N] ;
  float temp;
  float sum = 0.0;
  for (int i = 0; i < N; i++)

  { printf("a[%d] = ", i + 1);
    scanf("%f", &temp);
    A[i] = temp;
    original[i] = temp;
  }
      for (int i = 0; i < N; i++) {
          if (i % 2 == 0) { // Проверка на четный индекс
              A[i] = 1;
              sum += A[i];
          }
      

  }
      float average = sum / N;


printf("| Индекс | Исходное значение | Новое значение |\n");
printf("|--------|-------------------|----------------|\n");
 for (int i = 0; i < N; i++) {
printf("|   %2d   |      %.2f         |      %.2f      |\n", i + 1, original[i], A[i]);
}
printf("|--------|-------------------|----------------|\n");

printf("Среднее арифметическое: %.2f\n", average);
return 0;
}

int task3()
{
    setlocale(LC_ALL, "RUS");
    int array[100];
    int max, size, sum = 0;
    float average = sum / 100;
    printf("Введите длину массива\n");
    scanf("%d", &size);
    printf("Введите %d целых чисел массива\n", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &array[i]);
    max = array[0];
    for (int i = 0; i < size; i++)
        if (array[i] > max)
        {

            max = array[i];

        }
    printf("Максимум %d.\n", max);
    for (int i = 0; i < size; i++)
    {
        if (array[i] == max) break;
        else sum += array[i];
    }
    printf("Среднее арифметическое элементов массива", average);
    
   
       

}
int main()
{
    setlocale(LC_ALL, "RUS");

    int array[100];
    int max, size, sum = 0;
    float average; // Используем float для среднего

    printf("Введите длину массива\n");
    scanf("%d", &size);

    // Проверка на допустимость размера массива
    if (size > 100 || size <= 0) {
        printf("Размер массива должен быть от 1 до 100.\n");
        return 1;
    }

    printf("Введите %d целых числа массива\n", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &array[i]);

    max = array[0];
    for (int i = 1; i < size; i++) // Ищем максимум, начиная со второго элемента
        if (array[i] > max) {
            max = array[i];
        }

    printf("Максимум %d.\n", max);

    int count = 0; // Счетчик ненулевых элементов для среднего арифметического
    for (int i = 0; i < size; i++) {
        if (array[i] != 0) { // Исключаем нулевые элементы
            sum += array[i];
            count++;
        }
    }

    // Вычисляем среднее арифметическое
    if (count > 0) {
        average =sum / count; // Приводим сумму к float для точного деления
    }
    else {
        average = 0; // Если все элементы нулевые
    }

    printf("Среднее арифметическое ненулевых элементов массива: %.2f\n", average);

    return 0;
}




