/*
	Viết hàm tính số hạng thứ n của 2 dãy sau :
	x_{0} = 1 , y_{0} = 0
	Xn=Xn-1 + yn-1 với mọi n > 0
	yn=3xn-1 + 2yn-1 với mọi n>n
*/

#include <stdio.h>
#include <stdlib.h>

// Hàm đệ quy tính x_n
int tinhXn(int n);

// Hàm đệ quy tính y_n
int tinhYn(int n);

// Định nghĩa hàm tính x_n
int tinhXn(int n) {
	if (n == 0) {
		return 1;
	}
	return tinhXn(n - 1) + tinhYn(n - 1);
}

// Định nghĩa hàm tính y_n
int tinhYn(int n) {
	if (n == 0) {
		return 0;
	}
	return 3 * tinhXn(n - 1) + 2 * tinhYn(n - 1);
}

int main() {
	int n;

	// Nhập giá trị từ bàn phím
	printf("Nhap gia tri cua n (so nguyen duong): ");
	scanf("%d", &n);

	// Kiểm tra n có phải là số nguyên dương
	if (n < 0) {
		printf("N phai la so nguyen duong.\n");
		return 1;
	}

	// Tính và in kết quả
	int x_n = tinhXn(n);
	int y_n = tinhYn(n);
	printf("Gia tri cua x_%d la: %d\n", n, x_n);
	printf("Gia tri cua y_%d la: %d\n", n, y_n);

	// Dừng màn hình để xem kết quả
	system("pause");

	return 0;
}
