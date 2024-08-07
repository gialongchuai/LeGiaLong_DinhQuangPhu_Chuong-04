/*
	
*/

#include <stdio.h>
#include <stdlib.h>

// Hàm đệ quy tính giá trị f(n)
int tinhFn(int n) {
	// Điều kiện cơ bản: f(1) = 1
	if (n == 1) {
		return 1;
	}
	// Nếu n là số chẵn, f(2n) = 2 * f(n)
	if (n % 2 == 0) {
		return 2 * tinhFn(n / 2);
	}
	// Nếu n là số lẻ, f(2n + 1) = 2 * f(n) + 3 * f(n + 1)
	return 2 * tinhFn(n / 2) + 3 * tinhFn(n / 2 + 1);
}

int main() {
	int n;

	// Tính f(5) và in kết quả
	int result = tinhFn(5);
	printf("Gia tri cua f(5) la %d\n", result);

	// Nhập giá trị từ bàn phím
	printf("Nhap gia tri cua n (so nguyen duong): ");
	scanf("%d", &n);

	// Kiểm tra n có phải là số nguyên dương
	if (n <= 0) {
		printf("N phai la so nguyen duong.\n");
		return 1;
	}

	// Tính và in kết quả
	printf("Gia tri cua f(%d) la %d\n", n, tinhFn(n));

	// Dừng màn hình để xem kết quả
	system("pause");

	return 0;
}
