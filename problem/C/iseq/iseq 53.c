#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int x, y;
	int arr[100][100] = { 0 };
	int cnt;
	int n;
	scanf("%d", &n);
	x = n / 2; y = 0;
	cnt = 1;


	while (cnt <= n * n) {
		arr[y][x] = cnt++;
		if (cnt % n == 1) {
			y++;
		}
		else {
			y--;
			x++;
		}
			if (y < 0) {
				y = n - 1;
			}
			if (x > n - 1) {
				x = 0;
			}
	}
	for (y = 0; y < n; y++) {
		for (x = 0; x < n; x++) {
			printf("%d", arr[y][x]);
		}
		printf("\n");
	}
}