#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	int i;
	int hap;
	scanf("%d", &n);

	hap = 0;
	if (n % 2 == 1)
		for (i = 1; i <= n; i += 2)
			hap += i;
	else
		for (i = 2; i <= n; i += 2)
			hap += i;

	printf("%d", hap);
	return 0;
}