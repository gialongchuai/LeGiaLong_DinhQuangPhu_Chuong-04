/*
	
*/

#include <stdio.h>
#include <stdlib.h>

// Hàm đệ quy tính X_n
int tinhXnDeQuy(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	return tinhXnDeQuy(n - 1) + (n - 1) * tinhXnDeQuy(n - 2);
}

// Hàm khử đệ quy tính X_n
int tinhXnKhudeQuy(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	int X_n_2 = 1; // X_2
	int X_n_1 = 1; // X_1
	int X_n;
	for (int i = 3; i <= n; i++) {
		X_n = X_n_1 + (i - 1) * X_n_2;
		X_n_2 = X_n_1;
		X_n_1 = X_n;
	}
	return X_n;
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

	// Tính và in kết quả bằng cách đệ quy
	int Xn_dequy = tinhXnDeQuy(n);
	printf("Gia tri cua X_%d (de quy) la: %d\n", n, Xn_dequy);

	// Tính và in kết quả bằng cách khử đệ quy
	int Xn_khudequy = tinhXnKhudeQuy(n);
	printf("Gia tri cua X_%d (khu de quy) la: %d\n", n, Xn_khudequy);

	// Dừng màn hình để xem kết quả
	system("pause");

	return 0;
}
