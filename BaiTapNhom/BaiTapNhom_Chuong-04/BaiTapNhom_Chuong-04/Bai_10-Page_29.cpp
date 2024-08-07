/*
	. Cho mảng 1 chiều a đã có thứ tự chứa n số nguyên, viết hàm tìm kiếm số x trên a theo thuật toán tìm kiếm nhị phân bằng kỹ thuật đệ quy
*/

#include <stdio.h>
#include <stdlib.h>

// Hàm đệ quy tìm kiếm nhị phân
int timKiemNhiPhan(int a[], int left, int right, int x) {
	if (left > right) {
		// Không tìm thấy x trong mảng
		return -1;
	}

	int mid = left + (right - left) / 2;

	// Nếu x nằm ở giữa
	if (a[mid] == x) {
		return mid;
	}

	// Nếu x nhỏ hơn giá trị ở giữa, tìm ở nửa trái
	if (a[mid] > x) {
		return timKiemNhiPhan(a, left, mid - 1, x);
	}

	// Nếu x lớn hơn giá trị ở giữa, tìm ở nửa phải
	return timKiemNhiPhan(a, mid + 1, right, x);
}

int main() {
	int n, x;

	// Nhập số lượng phần tử của mảng
	printf("Nhap so luong phan tu cua mang: ");
	scanf("%d", &n);

	// Khai báo và nhập các phần tử của mảng
	int a[100];
	printf("Nhap cac phan tu cua mang (da duoc sap xep):\n");
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	// Nhập giá trị cần tìm
	printf("Nhap gia tri can tim: ");
	scanf("%d", &x);

	// Tìm kiếm và in kết quả
	int result = timKiemNhiPhan(a, 0, n - 1, x);
	if (result != -1) {
		printf("Gia tri %d duoc tim thay tai chi so %d\n", x, result);
	}
	else {
		printf("Gia tri %d khong co trong mang\n", x);
	}

	// Dừng màn hình để xem kết quả
	system("pause");

	return 0;
}
