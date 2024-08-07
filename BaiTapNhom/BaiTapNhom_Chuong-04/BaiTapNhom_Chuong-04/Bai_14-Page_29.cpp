/*
	
*/

#include <stdio.h>
#include <stdlib.h>

// Hàm đệ quy tính A_n
int tinhAn(int n) {
	if (n == 1) {
		return 1;
	}

	// Tính tổng của các số hạng từ A_1 đến A_(n-1)
	int tong = 0;
	for (int i = 1; i < n; i++) {
		tong += tinhAn(i);
	}

	// Tính A_n
	return n * tong;
}

int main() {
	int n;

	// Nhập giá trị từ bàn phím
	printf("Nhap gia tri cua n (so nguyen duong): ");
	scanf("%d", &n);

	// Kiểm tra n có phải là số nguyên dương
	if (n <= 0) {
		printf("N phai la so nguyen duong.\n");
		return 1;
	}

	// Tính và in kết quả
	int An = tinhAn(n);
	printf("Gia tri cua A_%d la: %d\n", n, An);

	// Dừng màn hình để xem kết quả
	system("pause");

	return 0;
}
