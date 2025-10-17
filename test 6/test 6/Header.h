#include <stdio.h>
#include <windows.h>

// Функция для установки кодировки
void setEncoding() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
}

// ===== ЗАДАЧА 5.1.1: Високосные годы =====
int isLeapYear(int year) {
	if (year % 400 == 0)
		return 1;
	if (year % 100 == 0)
		return 0;
	if (year % 4 == 0)
		return 1;
	return 0;
}

пп

ен

а

в
в

а


г


void task5_1_1() {
	printf("=== ЗАДАЧА 5.1.1: Високосные годы ===\n");
	int a, b;
	printf("Введите начало и конец интервала (два целых числа): ");
	if (scanf_s("%d %d", &a, &b) != 2) {
		printf("Неверный ввод\n");
		return;
	}
	printf("Високосные годы в интервале [%d, %d]:\n", a, b);

	int found = 0;
	for (int num = a; num <= b; num++) {
		if (isLeapYear(num)) {
			printf("%d\t", num);
			found = 1;
		}
	}
	if (!found) {
		printf("Високосные годы не найдены");
	}
	printf("\n");
}