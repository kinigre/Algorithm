#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int m, n;
	int x;
	int mok, na;
	
	scanf("%d %d %d", &m, &n, &x);
	mok = m / n;
	printf("%d.", mok);
	for (int i = 0; i < x; i++) {
		na = m % n;
		m = na * 10;
		mok = m / n;
		printf("%d", mok);
	}
}