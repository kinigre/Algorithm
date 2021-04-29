#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int A;
	int B;
	int C;

	scanf("%d %d", &A, &B);
	scanf("%d", &C);
	if (A >= 24 || A < 0) {
		return 0;
	}
	else if (B >= 60 || B < 0) {
		return 0;

	}
	else if (C >= 1001 || C < 0) {
		return 0;
	}
	B = B + C;
	while (B >= 60) {
		A = A + (B / 60);
		B = B % 60;
		if (A >= 24) {
			A = 0;
			B = B % 60;
		}
	}
	printf("%d %d", A, B);
	return 0;
}