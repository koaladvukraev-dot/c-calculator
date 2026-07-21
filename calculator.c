#include <stdio.h>
//функция защиты
void clearInput(void)
{
    int symbol;
    while ((symbol = getchar()) != '\n' && symbol != EOF)
    {
    }
}
//главная функция
int main() {
  //первый бесконечный цикл
  while (1) {
    int firstNumber, secondNumber, result;
    char operation;
    printf("Калькулятор\nВведите первое число:\n");
    //первая проверка если значение программа смогла прочитать
    if (scanf("%d", &firstNumber) != 1) {
      printf("Ошибка\n");
      clearInput();
      continue;
    } else {
      printf("Операция прошла успешно\n");
    }
    printf("Введите второе число:\n");
    //вторая проверка если значение программа смогла прочитать
    if (scanf("%d", &secondNumber) != 1) {
      printf("Ошибка\n");
      clearInput();
      continue;
    } else {
      printf("Операция прошла успешно\n");
    }
    printf("Введите действие: (+, -, x, /, %, b)\n");
    //третья проверка если значение программа смогла прочитать
    if (scanf(" %c", &operation) != 1) {
      printf("Ошибка\n");
      continue;
    } else {
      printf("Операция прошла успешно\n");
    }
    //огромная проверка выбранного действия
    if (operation == '+') {
      result = (firstNumber + secondNumber);
      printf(">%d\n", result);
    } else if (operation == '-') {
      result = (firstNumber - secondNumber);
      printf(">%d\n", result);
    } else if (operation == 'x') {
      result = (firstNumber * secondNumber);
      printf(">%d\n", result);
    } else if (operation == '/') {
      if (secondNumber == 0) {
        printf("Ошибка\n");
        continue;
      }
      result = (firstNumber / secondNumber);
      printf(">%d\n", result);
    } else if (operation == '%') {
      if (secondNumber == 0) {
        printf("Ошибка\n");
        continue;
      }
      result = (firstNumber % secondNumber);
      printf(">%d\n", result);
    } else if (operation == 'b') {
      printf("Завершение программы");
      return 0;
    } else {
      printf("Ошибка\n");
      continue;
    }
  }
  return 0;
}
