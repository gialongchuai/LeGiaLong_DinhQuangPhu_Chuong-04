/*
	
*/
#include <stdio.h>
#include <stdlib.h>

// Hàm đệ quy tính Y_n
int tinhYnDeQuy(int n) {
	if (n == 1) {
		return 1;
	}
	else if (n == 2) {
		return 2;
	}
	else if (n == 3) {
		return 3;
	}
	else {
		return tinhYnDeQuy(n - 1) + 2 * tinhYnDeQuy(n - 2) + 3 * tinhYnDeQuy(n - 3);
	}
}

// Hàm khử đệ quy tính Y_n
int tinhYnKhudeQuy(int n) {
	if (n == 1) {
		return 1;
	}
	else if (n == 2) {
		return 2;
	}
	else if (n == 3) {
		return 3;
	}
	else {
		int Yn_1 = 3, Yn_2 = 2, Yn_3 = 1, Yn;
		for (int i = 4; i <= n; i++) {
			Yn = Yn_1 + 2 * Yn_2 + 3 * Yn_3;
			Yn_3 = Yn_2;
			Yn_2 = Yn_1;
			Yn_1 = Yn;
		}
		return Yn;
	}
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
	int Yn_dequy = tinhYnDeQuy(n);
	printf("Gia tri cua Y_%d (de quy) la: %d\n", n, Yn_dequy);

	// Tính và in kết quả bằng cách khử đệ quy
	int Yn_khudequy = tinhYnKhudeQuy(n);
	printf("Gia tri cua Y_%d (khu de quy) la: %d\n", n, Yn_khudequy);

	// Dừng màn hình để xem kết quả
	system("pause");

	return 0;
}
