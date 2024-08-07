/*
	Tìm trị phần tử thứ n của 1 cấp số nhân có số hạng đầu là a, công bội là
q:
Với U(n) thỏa 
a nếu n =1 
qU(n-1) nếu n>1
*/

#include <stdio.h>
#include <stdlib.h>
// Hàm đệ quy tính trị phần tử thứ n của cấp số nhân
// với số hạng đầu là a và công bội là q
int tinhU(int n, int a, int q) {
	// Điều kiện dừng: nếu n = 1 thì trả về a
	if (n == 1) {
		return a;
	}
	// Gọi đệ quy để tính giá trị của phần tử trước đó và nhân với q
	return q * tinhU(n - 1, a, q);
}

int main() {
	int n, a, q;

	// Nhập vào số hạng đầu (a), công bội (q) và chỉ số phần tử cần tính (n)
	printf("Nhap so hang dau a: ");
	scanf("%d", &a);
	printf("Nhap cong boi q: ");
	scanf("%d", &q);
	printf("Nhap chi so phan tu n: ");
	scanf("%d", &n);

	// Tính và in ra giá trị của phần tử thứ n
	printf("Gia tri cua phan tu thu %d la: %d\n", n, tinhU(n, a, q));

	system("pause");
	return 0;
}
