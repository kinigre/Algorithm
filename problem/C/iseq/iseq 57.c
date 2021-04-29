#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num[101] = { 0 }, N;
	while (1) {
		scanf("%d", &N);
		if (N == 0) {
			break;
		}
		num[N]++;
	}
	while (1) {
		scanf("%d", &N);
		if (N == 0) {
			break;
		}
		num[N]++;
	}
	for (int i = 1; i <= 100; i++) {
		if (num[i] == 2) {
			printf("%d ", i);
		}
	}
	printf("\n");
	for (int i = 1; i <= 100; i++) {
		if (num[i] >= 1) {
			printf("%d ",i);
		}
	}
}