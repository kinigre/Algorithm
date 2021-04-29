#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main() {
	int n;
	int N;
	int cnt[7] = {0};
	float p ;
	srand(time(NULL));
	
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		n = (rand() % 6) + 1;
		cnt[n]++;
	}
	for (int j = 1; j <= 6; j++) {
		p = (float)cnt[j] / (float)N * 100;
		printf("%d %d %.2f\n", j, cnt[j], p);
	}
}