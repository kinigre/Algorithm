#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int trainNum[7] = { 0, 5500,7000,8500,9500,12000,20000 };
	int a, b, c;
	while (1) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0) break;
		if (a == 1) {
			printf("%d\n", trainNum[b] * c / 100 * 80);
		}
		else if (a == 2) {
			printf("%d\n", trainNum[b] * c / 100 * 90);
		}
	}
	return 0;
}