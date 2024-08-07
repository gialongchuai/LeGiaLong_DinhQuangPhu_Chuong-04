/*
	Viết hàm tính m^n với m là số nguyên và n là số nguyên dương nhập từ bàn phím.
*/

#include <stdio.h>
#include <stdlib.h>
// Hàm đệ quy tính m^n
int tinhMu(int m, int n) {
	// Điều kiện cơ bản: bất kỳ số nào m^0 đều bằng 1
	if (n == 0) {
		return 1;
	}
	// Gọi đệ quy với n giảm đi 1
	return m * tinhMu(m, n - 1);
}

int main() {
	int m, n;

	// Nhập giá trị từ bàn phím
	printf("Nhap gia tri cua m: ");
	scanf("%d", &m);
	printf("Nhap gia tri cua n (so nguyen duong): ");
	scanf("%d", &n);

	// Kiểm tra n có phải là số nguyên dương
	if (n < 0) {
		printf("N phai la so nguyen duong.\n");
		return 1;
	}

	// Tính và in kết quả
	printf("%d^%d = %d\n", m, n, tinhMu(m, n));

	system("pause");
	return 0;
}
