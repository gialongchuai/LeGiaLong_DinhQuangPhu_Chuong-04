/*
	Viết hàm tìm ước chung lớp nhất của 2 số nguyên dương a, b.
Gợi ý : Nếu a>b thì UCLN(a,b) = UCLN(b,a-b), ngược lại UCLN(a,b) = UCLN(a, b- a).
*/

#include <stdio.h>
#include <stdlib.h>
// Hàm đệ quy tìm UCLN của hai số a và b
int timUCLN(int a, int b) {
	// Điều kiện cơ bản: Nếu một trong hai số là 0, UCLN là số còn lại
	if (b == 0) {
		return a;
	}
	if (a == 0) {
		return b;
	}

	// Nếu a lớn hơn b, gọi đệ quy với a-b và b
	if (a > b) {
		return timUCLN(a - b, b);
	}
	// Ngược lại, gọi đệ quy với a và b-a
	return timUCLN(a, b - a);
}

int main() {
	int a, b;

	// Nhập giá trị từ bàn phím
	printf("Nhap gia tri cua a (so nguyen duong): ");
	scanf("%d", &a);
	printf("Nhap gia tri cua b (so nguyen duong): ");
	scanf("%d", &b);

	// Kiểm tra a và b có phải là số nguyên dương
	if (a <= 0 || b <= 0) {
		printf("Cac gia tri a va b phai la so nguyen duong.\n");
		return 1;
	}

	// Tính và in kết quả
	printf("UCLN cua %d va %d la %d\n", a, b, timUCLN(a, b));

	system("pause");
	return 0;
}
