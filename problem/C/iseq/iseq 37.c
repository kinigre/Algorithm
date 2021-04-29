#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	freopen("input.txt", "r", stdin);
	int arr[10] = { 0 };
	int max, min;
	int minus = 0;
	int i;

	for (i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < 9; i++)
		printf("%d ", arr[i]);
	printf("\n");

	max = arr[0];
	min = arr[0];
	for (i = 1; i < 9; i++) {
		if (max < arr[i]) max = arr[i];
		if (min > arr[i]) min = arr[i];
	}
	minus = max - min;

	printf("%d\n", minus);

	return 0;
}