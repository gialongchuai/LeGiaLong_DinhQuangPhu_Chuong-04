/*
	Bài 1: Tính S(n)
	▪ S(n) = 1+2 +3+… + n
	▪ S(n) = 1+1/2 + 1/3 + ... + 1/n
	▪ S(n) = 1*2 + 2*3+ 3*4 + 4*5 +.….+ n(n+1)
*/

#include <stdio.h>

// Hàm tính S(n) = 1 + 2 + 3 + ... + n
int tinh_S1(int n) {
	int tong = 0;
	for (int i = 1; i <= n; i++) {
		tong += i;
	}
	return tong;
}


// Hàm tính S(n) = 1 + 1/2 + 1/3 + ... + 1/n
double tinh_S2(int n) {
	double tong = 0.0;
	for (int i = 1; i <= n; i++) {
		tong += 1.0 / i;
	}
	return tong;
}

// Hàm tính S(n) = 1*2 + 2*3 + 3*4 + ... + n*(n+1)
int tinh_S3(int n) {
	int tong = 0;
	for (int i = 1; i <= n; i++) {
		tong += i * (i + 1);
	}
	return tong;
}

int main() {
	int lua_chon, n;

	while (1) {
		// Hiển thị menu
		printf("Chuong trinh tinh tong S(n) - Lua chon:\n");
		printf("1. Tinh S(n) = 1 + 2 + 3 + ... + n\n");
		printf("2. Tinh S(n) = 1 + 1/2 + 1/3 + ... + 1/n\n");
		printf("3. Tinh S(n) = 1*2 + 2*3 + 3*4 + ... + n*(n+1)\n");
		printf("4. Thoat\n");
		printf("Nhap lua chon cua ban (1-4): ");
		scanf("%d", &lua_chon);

		// Xử lý lựa chọn
		switch (lua_chon) {
		case 1:
			printf("Nhap gia tri n: ");
			scanf("%d", &n);
			printf("S(%d) = %d\n", n, tinh_S1(n));
			break;
		case 2:
			printf("Nhap gia tri n: ");
			scanf("%d", &n);
			printf("S(%d) = %.6lf\n", n, tinh_S2(n));
			break;
		case 3:
			printf("Nhap gia tri n: ");
			scanf("%d", &n);
			printf("S(%d) = %d\n", n, tinh_S3(n));
			break;
		case 4:
			printf("Thoat chuong trinh.\n");
			return 0;
		default:
			printf("Lua chon khong hop le. Vui long chon lai.\n");
			break;
		}
	}

	return 0;
}
