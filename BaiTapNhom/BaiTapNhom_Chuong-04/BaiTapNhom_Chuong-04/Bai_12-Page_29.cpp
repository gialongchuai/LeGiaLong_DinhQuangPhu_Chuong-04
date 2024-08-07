/*
	Viết hàm tìm số Fibonacci lớn nhất nhưng nhỏ hơn số nguyên n cho trước theo 2 cách đệ quy và khử đệ quy.
Ví dụ : nhập n = 15 s hat o Fibonacci lớn nhất nhỏ hơn 15 là 13.
*/

#include <stdio.h>
#include <stdlib.h>

// Hàm đệ quy tính số Fibonacci thứ k
int fibonacci(int k) {
	if (k <= 2) {
		return 1;
	}
	return fibonacci(k - 1) + fibonacci(k - 2);
}

// Hàm đệ quy tìm số Fibonacci lớn nhất nhỏ hơn n
int timFibonacciLonNhatNhoHonN_DeQuy(int n) {
	int i = 1;
	while (1) {
		int fib = fibonacci(i);
		if (fib >= n) {
			return fibonacci(i - 1);
		}
		i++;
	}
}

// Hàm khử đệ quy tìm số Fibonacci lớn nhất nhỏ hơn n
int timFibonacciLonNhatNhoHonN_KhuDeQuy(int n) {
	int a = 1, b = 1;
	while (b < n) {
		int temp = a + b;
		if (temp >= n) {
			return b;
		}
		a = b;
		b = temp;
	}
	return a;
}

int main() {
	int n;

	// Nhập số nguyên n từ bàn phím
	printf("Nhap so nguyen n: ");
	scanf("%d", &n);

	// Kiểm tra n có phải là số nguyên dương
	if (n <= 0) {
		printf("N phai la so nguyen duong.\n");
		return 1;
	}

	// Tìm và in kết quả bằng cách đệ quy
	int fib_dequy = timFibonacciLonNhatNhoHonN_DeQuy(n);
	printf("So Fibonacci lon nhat nho hon %d (de quy) la: %d\n", n, fib_dequy);

	// Tìm và in kết quả bằng cách khử đệ quy
	int fib_khudequy = timFibonacciLonNhatNhoHonN_KhuDeQuy(n);
	printf("So Fibonacci lon nhat nho hon %d (khu de quy) la: %d\n", n, fib_khudequy);

	// Dừng màn hình để xem kết quả
	system("pause");

	return 0;
}
