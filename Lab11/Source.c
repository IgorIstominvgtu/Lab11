
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
          if (i % 2 == 0) { // �������� �� ������ ������
              A[i] = 1;
              sum += A[i];
          }
      

  }
      float average = sum / N;


printf("| ������ | �������� �������� | ����� �������� |\n");
printf("|--------|-------------------|----------------|\n");
 for (int i = 0; i < N; i++) {
printf("|   %2d   |      %.2f         |      %.2f      |\n", i + 1, original[i], A[i]);
}
printf("|--------|-------------------|----------------|\n");

printf("������� ��������������: %.2f\n", average);
return 0;
}

int task3()
{
    setlocale(LC_ALL, "RUS");
    int array[100];
    int max, size, sum = 0;
    float average = sum / 100;
    printf("������� ����� �������\n");
    scanf("%d", &size);
    printf("������� %d ����� ����� �������\n", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &array[i]);
    max = array[0];
    for (int i = 0; i < size; i++)
        if (array[i] > max)
        {

            max = array[i];

        }
    printf("�������� %d.\n", max);
    for (int i = 0; i < size; i++)
    {
        if (array[i] == max) break;
        else sum += array[i];
    }
    printf("������� �������������� ��������� �������", average);
    
   
       

}
int main()
{
    setlocale(LC_ALL, "RUS");

    int array[100];
    int max, size, sum = 0;
    float average; // ���������� float ��� ��������

    printf("������� ����� �������\n");
    scanf("%d", &size);

    // �������� �� ������������ ������� �������
    if (size > 100 || size <= 0) {
        printf("������ ������� ������ ���� �� 1 �� 100.\n");
        return 1;
    }

    printf("������� %d ����� ����� �������\n", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &array[i]);

    max = array[0];
    for (int i = 1; i < size; i++) // ���� ��������, ������� �� ������� ��������
        if (array[i] > max) {
            max = array[i];
        }

    printf("�������� %d.\n", max);

    int count = 0; // ������� ��������� ��������� ��� �������� ���������������
    for (int i = 0; i < size; i++) {
        if (array[i] != 0) { // ��������� ������� ��������
            sum += array[i];
            count++;
        }
    }

    // ��������� ������� ��������������
    if (count > 0) {
        average =sum / count; // �������� ����� � float ��� ������� �������
    }
    else {
        average = 0; // ���� ��� �������� �������
    }

    printf("������� �������������� ��������� ��������� �������: %.2f\n", average);

    return 0;
}




