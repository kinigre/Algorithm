#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int cnt = 0;
	int arr[6] = { 0 };
	int n;
	scanf("%d", &n);
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
		if (n == arr[i]) {
			cnt++;
		}
	}
	printf("%d", cnt);
}