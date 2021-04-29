#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() { 
	int N, q, K;
	int num;
	int cnt=0;
	scanf("%d %d", &N, &K);
	for (q = 1; q <= N; q++) {
		if (N % q == 0) {
			cnt++;
			if (cnt == K) {
				printf("%d", q);
				return 0;
			}
		}
	}
	printf("0");
}