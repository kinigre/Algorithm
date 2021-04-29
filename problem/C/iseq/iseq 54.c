#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	int i, j, sw = 1;
	int x=-1, y=0;
	int cnt = 1;
	int arr[10][10] = { 0 };
	scanf("%d", &n);

	int len = n;
	for (i = 0; i < n*n; i++) {
		for (j = 0; j < len; j++) {
			x += sw;
			arr[y][x] = cnt++;
		}
		len--;
		for (j = 0; j < len; j++) {
			y += sw;
			arr[y][x] = cnt++;
		}

		sw *= -1;
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
}