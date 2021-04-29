#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	int i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		int num = 1;
		for (j = n - 1; j > i; j--) {
			printf(" ");
		}
		for (j = 0; j <= 2*i; j++) {
			printf("%d", num);

			if (j < i)
				num++;
			else
				num--;
		}
		printf("\n");
	}
}