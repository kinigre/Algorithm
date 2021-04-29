#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int N;
	int arr[100] = { 1 };//1번째 원소를 정해주고 나머지는 0으로 초기화

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 100; j++) {
			arr[j] *= 2;
		}
		for (int j = 0; j < 100; j++) {
			if (arr[j] >= 10) {
				arr[j + 1] += arr[j] / 10;
				arr[j] %= 10;
			}
		}
	}
	for (int i = 99; i >= 0; i--) {
		if (arr[i] != 0) {
			for (int j = i; j >= 0; j--)
				printf("%d", arr[j]);
			break;//1개만 나간다
		}
	}
}
