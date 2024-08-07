/*
	Viết hàm tính biểu thức U(n) sau đây, với n là số nguyên dương nhập từ bàn
phím :
Un thỏa
n với n < 6
U(n-5) + U(n-4) + ... U(n-1) với n>=6
*/

#include <stdio.h>
#include <stdlib.h>

// Hàm đệ quy tính giá trị biểu thức U(n)
int tinhUn(int n) {
	// Điều kiện cơ bản: Nếu n < 6, U(n) = n
	if (n < 6) {
		return n;
	}
	// Nếu n >= 6, tính U(n) = U(n-5) + U(n-4) + ... + U(n-1)
	int sum = 0;
	for (int i = 1; i <= 5; i++) {
		sum += tinhUn(n - i);
	}
	return sum;
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
	printf("Gia tri cua U(%d) la %d\n", n, tinhUn(n));

	// Dừng màn hình để xem kết quả
	system("pause");

	return 0;
}
