#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[9] = { 0 };
	int N;
	int aver=0;
	int temp=0;
	int sum = 0;

	scanf("%d", &N);
	if (N < 10 && N>1) {
		for (int i = 0; i < N; i++) {
			scanf("%d", &arr[i]);
			if (arr[i] % 10 == 0 && ( arr[i] < 100 && arr[i]>0)) {
				sum = arr[i] + sum;
			}
			else {
				return 0;
			}
		}
	}
	else {
		return 0;
	}
	aver = sum / N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N-(i+1); j++) {//뒤에서 부터 자신의 위치를 찾아감
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	}
	printf("%d\n", aver);
	printf("%d", arr[N / 2]);
	return 0;
}