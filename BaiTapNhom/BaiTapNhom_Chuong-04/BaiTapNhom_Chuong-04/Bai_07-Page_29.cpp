/*
*/

#include <stdio.h>
#include <stdlib.h>

// Ham tinh so hang thu n cua day thu nhat
int day1(int n) {
	if (n == 0)
		return 1;
	else if (n == 1)
		return 0;
	else if (n == 2)
		return -1;
	else
		return 2 * day1(n - 1) - 3 * day1(n - 2) - day1(n - 3);
}

// Ham tinh so hang thu n cua day thu hai
int day2(int n) {
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else if (n == 3)
		return 3;
	else
		return 2 * day2(n - 3) + day2(n - 2) - 3 * day2(n - 1);
}

int main() {
	int choice, n;

	do {
		printf("Chon day so de tinh:\n");
		printf("1. Day thu nhat\n");
		printf("2. Day thu hai\n");
		printf("3. Thoat\n");
		printf("Lua chon cua ban: ");
		scanf("%d", &choice);

		if (choice == 1 || choice == 2) {
			printf("Nhap so n: ");
			scanf("%d", &n);

			if (choice == 1) {
				printf("So hang thu %d cua day thu nhat la: %d\n", n, day1(n));
			}
			else {
				printf("So hang thu %d cua day thu hai la: %d\n", n, day2(n));
			}
		}
	} while (choice != 3);

	system("pause");
	return 0;
}
