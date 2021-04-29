#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char arr[40] = { '\0' };
	int n = 0;
	scanf("%s", arr);
	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] == '@') {
			n = i;
		}
	}
	for (int i = n + 1; i < strlen(arr); i++) {
		printf("%c", arr[i]);
	}
	printf("@");
	for (int i = 0; i < n; i++) {
		printf("%c", arr[i]);
	}
	return 0;
}