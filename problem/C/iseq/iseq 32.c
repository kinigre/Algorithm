#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num = 0;
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			printf("%d ", i);
		}
	}

	return 0;
}