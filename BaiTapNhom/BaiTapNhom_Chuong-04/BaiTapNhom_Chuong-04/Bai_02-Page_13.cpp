/*
	
*/

#include <stdio.h>
#include <stdlib.h>
// Hàm đệ quy để tìm giá trị phần tử thứ n của cấp số cộng
int giaTriPhanTu(int a, int r, int n) {
	if (n == 1) {
		return a; // Nếu n = 1, trả về số hạng đầu a
	}
	else {
		return giaTriPhanTu(a, r, n - 1) + r; // Sử dụng đệ quy để tính giá trị phần tử thứ n
	}
}

int main() {
	int a, r, n;

	// Nhập số hạng đầu, công sai và chỉ số phần tử
	printf("Nhap so hang dau a: ");
	scanf("%d", &a);
	printf("Nhap cong sai r: ");
	scanf("%d", &r);
	printf("Nhap chi so phan tu n: ");
	scanf("%d", &n);

	// Tính và in giá trị phần tử thứ n
	int ketQua = giaTriPhanTu(a, r, n);
	printf("Gia tri phan tu thu %d cua cap so cong la: %d\n", n, ketQua);

	system("pause");
	return 0;
}
