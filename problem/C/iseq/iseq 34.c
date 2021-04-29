#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int m, n;
	int tmp;
	int na;

	scanf("%d %d", &m, &n);

	if (m > n)
	{
		tmp = m;
		m = n;
		n = tmp;
	}

	for (int i = m; i <= n; i++) {
		for (na = 2; na < i; na++)
			if (i % na == 0) break;
		if (i == na)
			printf("%d ", i);
	}

	return 0;
}