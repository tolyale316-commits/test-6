#include <stdio.h>
#include <windows.h>

// ������� ��� ��������� ���������
void setEncoding() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
}

// ===== ������ 5.1.1: ���������� ���� =====
int isLeapYear(int year) {
	if (year % 400 == 0)
		return 1;
	if (year % 100 == 0)
		return 0;
	if (year % 4 == 0)
		return 1;
	return 0;
}

��

��

�

�
�

�


�


void task5_1_1() {
	printf("=== ������ 5.1.1: ���������� ���� ===\n");
	int a, b;
	printf("������� ������ � ����� ��������� (��� ����� �����): ");
	if (scanf_s("%d %d", &a, &b) != 2) {
		printf("�������� ����\n");
		return;
	}
	printf("���������� ���� � ��������� [%d, %d]:\n", a, b);

	int found = 0;
	for (int num = a; num <= b; num++) {
		if (isLeapYear(num)) {
			printf("%d\t", num);
			found = 1;
		}
	}
	if (!found) {
		printf("���������� ���� �� �������");
	}
	printf("\n");
}