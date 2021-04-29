#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[6][6] = { 0 };
	int i, j;
	int n;
	int num = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			num++;
			arr[i][j] = num;
		}

	}
	
	for (j = n-1; j >= 0; j--) {
		for (i = n-1; i >= 0; i--) {
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}