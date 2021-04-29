#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, c, d, e;
	int su;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	if (a > 9 || b > 9 || c > 9 || d > 9 || e > 9) {
		return 0;
	}
	if (a < 0 || b < 0 || c < 0 || d < 0 || e < 0) {
		return 0;
	}
	su = (a * a + b * b + c * c + d * d + e * e) % 10;
	printf("%d", su);
}