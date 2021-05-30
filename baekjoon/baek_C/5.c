#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, N;
	int NN;
	int cnt = 0;
	int ten, one;
	int t, o;
	scanf("%d", &N);
	if (N < 100 && N >= 0) {
		n = N;
		while (1) {
			ten = n / 10;
			one = n % 10;
			o = (ten + one) % 10;
			t = one;
			NN = (t * 10) + o;
			n = NN;
			cnt++;

			if (NN == N) {
				printf("%d", cnt);
				break;
			}
		}
	}
	return 0;
}