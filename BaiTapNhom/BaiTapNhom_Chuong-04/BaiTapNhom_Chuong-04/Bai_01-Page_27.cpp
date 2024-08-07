/*
	
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Cau 1
int sum_recursive(int n) {
	if (n == 1)
		return 1;
	return n + sum_recursive(n - 1);
}

int sum_non_recursive(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum += i;
	return sum;
}

// Cau 2
double sqrt_recursive(int n) {
	if (n == 1)
		return sqrt((double)2);
	return sqrt(2 + sqrt_recursive(n - 1));
}

double sqrt_non_recursive(int n) {
	double result = sqrt((double)2);
	for (int i = 1; i < n; i++)
		result = sqrt(2 + result);
	return result;
}

// Cau 3
double harmonic_recursive(int n) {
	if (n == 1)
		return 1.0 / 2;
	return (double)n / (n + 1) + harmonic_recursive(n - 1);
}

double harmonic_non_recursive(int n) {
	double sum = 0;
	for (int i = 1; i <= n; i++)
		sum += (double)i / (i + 1);
	return sum;
}

// Cau 4
double series_recursive(int n) {
	if (n == 0)
		return 1;
	return 1.0 / (2 * n + 1) + series_recursive(n - 1);
}

double series_non_recursive(int n) {
	double sum = 0;
	for (int i = 0; i <= n; i++)
		sum += 1.0 / (2 * i + 1);
	return sum;
}


void menu() {
	int choice, n;
	do {
		printf("Chon bai toan:\n");
		printf("1. Tong 1 + 2 + ... + n\n");
		printf("2. Can bac 2 + Can bac 2(2 + Can bac 2) + ...\n");
		printf("3. Tong 1/2 + 2/3 + ... + n/(n+1)\n");
		printf("4. Tong 1 + 1/3 + 1/5 + ... + 1/(2n+1)\n");
		printf("5. Tong 1.2 + 2.3 + ... + n(n+1)\n");
		printf("6. Tong 1/(1.2.3) + ... + 1/(n(n+1)(n+2))\n");
		printf("7. Tong 1^2 + 2^2 + ... + n^2\n");
		printf("8. Tong (1) + (1+2) + (1+2+3) + ... + (1+2+...+n)\n");
		printf("9. Tong -1/2 + 1/3 + -1/4 + ...\n");
		printf("10. Tong (1.2!) / (2 + sqrt(3)) + ...\n");
		printf("11. Tong (1 + sqrt(2)) / (2 + sqrt(3)) + ...\n");
		printf("0. Thoat\n");
		printf("Lua chon cua ban: ");
		scanf("%d", &choice);

		if (choice == 0) break;

		printf("Nhap n: ");
		scanf("%d", &n);

		switch (choice) {
		case 1:
			printf("Tong de quy: %d\n", sum_recursive(n));
			printf("Tong khong de quy: %d\n", sum_non_recursive(n));
			break;
		case 2:
			printf("Tong de quy: %f\n", sqrt_recursive(n));
			printf("Tong khong de quy: %f\n", sqrt_non_recursive(n));
			break;
		case 3:
			printf("Tong de quy: %f\n", harmonic_recursive(n));
			printf("Tong khong de quy: %f\n", harmonic_non_recursive(n));
			break;
		case 4:
			printf("Tong de quy: %f\n", series_recursive(n));
			printf("Tong khong de quy: %f\n", series_non_recursive(n));
			break;
		default:
			printf("Lua chon khong hop le!\n");
			break;
		}
		printf("\n");
	} while (choice != 0);
}

int main() {
	menu();
	system("pause");
	return 0;
}
