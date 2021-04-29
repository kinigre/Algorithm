#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	freopen("input.txt", "r", stdin);
	int cnt;
	int arr[4] = { 0 };
	char yut[5] = { 'D','C','B','A','E'};
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &arr[j]);
		}
		cnt = 0;
		for (int j = 0; j < 4; j++) {
			cnt += arr[j];
		}
		printf("%c", yut[cnt]);
	}
	
	return 0;
}