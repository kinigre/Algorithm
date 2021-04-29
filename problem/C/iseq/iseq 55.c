#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a=1, b=1;
	int c=0;
	int n;
	scanf("%d", &n);
	for (int i = 3; i <= n; i++) {
		c = a + b;
		a = b;
		b = c;
	}
	printf("%d",c);
	return 0;
}