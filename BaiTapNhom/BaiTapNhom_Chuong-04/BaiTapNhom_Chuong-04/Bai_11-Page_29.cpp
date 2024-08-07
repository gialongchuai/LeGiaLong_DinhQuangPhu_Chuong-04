/*
	
*/

#include <stdio.h>
#include <stdlib.h>

// Hàm đệ quy tính số Fibonacci thứ n
int fibonacci(int n) {
	if (n <= 2) {
		return 1;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}

// Hàm xuất dãy số Fibonacci có n phần tử
void xuatDayFibonacci(int n) {
	for (int i = 1; i <= n; i++) {
		printf("%d ", fibonacci(i));
	}
	printf("\n");
}

int main() {
	int n;

	// Nhập số lượng phần tử của dãy Fibonacci từ bàn phím
	printf("Nhap so luong phan tu cua day Fibonacci: ");
	scanf("%d", &n);

	// Kiểm tra n có phải là số nguyên dương
	if (n <= 0) {
		printf("N phai la so nguyen duong.\n");
		return 1;
	}

	// Xuất dãy số Fibonacci
	printf("Day so Fibonacci co %d phan tu la: ", n);
	xuatDayFibonacci(n);

	// Dừng màn hình để xem kết quả
	system("pause");

	return 0;
}
