#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[7] = { 0 };
	int oddSum = 0;
	int oddMin;
	int cnt = 0;

	for (int i = 0; i < 7; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] >= 100) {
			break;
		}
	}
	oddMin = arr[1];
	for (int i = 0; i < 7; i++) {
		if (arr[i] % 2 == 1) {
			oddSum += arr[i];
			if (oddMin > arr[i]) { 
				oddMin = arr[i];
			}
			cnt = -1;
		}
		else if(cnt==0){
			printf("%d", -1);
		}
	}
	if (cnt == -1) {
		printf("%d %d", oddSum, oddMin);
	}
}