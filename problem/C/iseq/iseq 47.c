#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char arr[20] = { 0 };
	char LR;
	int num, len;
	scanf("%s%*c", arr);
	scanf("%c", &LR);
	scanf("%d", &num);
	len = strlen(arr);
	if (LR == 'L') {
		for (int i = num; i < num + len; i++) {
			printf("%c", arr[i % len]);
		}
	}
	else if (LR == 'R') {
		for (int i = len - num; i < len + len - num; i++) {
			printf("%c", arr[i % len]);
		}
	}
	return 0;
}