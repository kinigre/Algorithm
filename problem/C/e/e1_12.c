#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[7] = { 0 };
	int temp = 0;
	
	for (int i = 0; i < 7; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] >= 100 && arr[i]<=0) {
			return 0;
		}
	}

	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7 - (i + 1); j++) {
			if (arr[j] < arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 2; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}