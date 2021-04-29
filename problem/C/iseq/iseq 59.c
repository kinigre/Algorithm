#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	int m = 2, len = 0;
	int arr[36] = { 0 };
	scanf("%d", &n);
	while(n != 0) {
		arr[len++] = n % m;
		n /= m;
	}
	for (int i = len-1; i >= 0; i--) {
		printf("%d", arr[i]);
	}
	return 0;
}
