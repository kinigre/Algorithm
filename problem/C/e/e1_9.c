#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[9] = { 0 };
	int max;
	int cnt;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
	}
	max = arr[0];
	for (int i = 1; i < 9; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
		if (max == arr[i]) {
			cnt = i+1;
		}
	}
	printf("%d %d", max, cnt);
}