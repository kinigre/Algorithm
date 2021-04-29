#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	freopen("input.txt", "r", stdin);
	int i, num[10] = { 0 };
	int max, min;

	for (i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
	}
	max = num[0];
	min = num[0];
	for (i = 1; i < 10; i++) {
		if (max < num[i]) {
			max = num[i];
		}
		if (min > num[i]) {
			min = num[i];
		}
	}
	printf("%d\n%d\n", max, min);
	return 0;
}