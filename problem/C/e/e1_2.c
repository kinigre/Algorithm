#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	freopen("input.txt", "r", stdin);
	int K,N,M;
	int budon;
	scanf("%d %d %d", &K, &N, &M);
	if (K * N <= M) {
		budon = 0;
		printf("%d", budon);
	}
	else if (K * N > M) {
		budon = (K * N) - M;
		printf("%d", budon);
	}
	return 0;
}