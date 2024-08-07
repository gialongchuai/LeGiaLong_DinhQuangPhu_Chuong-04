/*
	Viết hàm tìm giá trị phần từ thứ n của cấp số cộng có hạng đầu là a, công sai là r:
	Un thỏa 
	a, nếu n =1 
	U(n-1) +r nếu n>1
*/

#include <stdio.h>
#include <stdlib.h>

// Hàm đệ quy tìm giá trị phần tử thứ n của cấp số cộng
int timPhanTuCSC(int a, int r, int n) {
	// Điều kiện cơ bản: Nếu n là 1, phần tử đầu tiên là a
	if (n == 1) {
		return a;
	}
	// Gọi đệ quy với n giảm đi 1 và cộng thêm công sai r
	return timPhanTuCSC(a, r, n - 1) + r;
}

int main() {
	int a, r, n;

	// Nhập giá trị từ bàn phím
	printf("Nhap gia tri cua a (hang dau): ");
	scanf("%d", &a);
	printf("Nhap gia tri cua r (cong sai): ");
	scanf("%d", &r);
	printf("Nhap gia tri cua n (phan tu thu n): ");
	scanf("%d", &n);

	// Kiểm tra n có phải là số nguyên dương
	if (n <= 0) {
		printf("N phai la so nguyen duong.\n");
		return 1;
	}

	// Tính và in kết quả
	printf("Gia tri phan tu thu %d cua cap so cong la %d\n", n, timPhanTuCSC(a, r, n));

	// Dừng màn hình để xem kết quả
	system("pause");

	return 0;
}
