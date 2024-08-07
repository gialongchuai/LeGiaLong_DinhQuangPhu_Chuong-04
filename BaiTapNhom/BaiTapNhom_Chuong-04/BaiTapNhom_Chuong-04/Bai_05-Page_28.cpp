/*
	Viết hàm tìm giá trị phần tử thứ n của cấp số nhân có hạng đầu là a, công bội là
	q:
	Un thỏa
	a, nếu n =1 
	qU(n-1) nếu n>1
*/

#include <stdio.h>
#include <stdlib.h>

// Hàm đệ quy tìm giá trị phần tử thứ n của cấp số nhân
int timPhanTuCSN(int a, int q, int n) {
	// Điều kiện cơ bản: Nếu n là 1, phần tử đầu tiên là a
	if (n == 1) {
		return a;
	}
	// Gọi đệ quy với n giảm đi 1 và nhân với công bội q
	return q * timPhanTuCSN(a, q, n - 1);
}

int main() {
	int a, q, n;

	// Nhập giá trị từ bàn phím
	printf("Nhap gia tri cua a (hang dau): ");
	scanf("%d", &a);
	printf("Nhap gia tri cua q (cong boi): ");
	scanf("%d", &q);
	printf("Nhap gia tri cua n (phan tu thu n): ");
	scanf("%d", &n);

	// Kiểm tra n có phải là số nguyên dương
	if (n <= 0) {
		printf("N phai la so nguyen duong.\n");
		return 1;
	}

	// Tính và in kết quả
	printf("Gia tri phan tu thu %d cua cap so nhan la %d\n", n, timPhanTuCSN(a, q, n));

	// Dừng màn hình để xem kết quả
	system("pause");

	return 0;
}
