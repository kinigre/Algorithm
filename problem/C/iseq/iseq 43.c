#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char arr[20] = { '\0' };
	scanf("%s", &arr);
	for (int i = strlen(arr) - 1; i >= 0; i--) {
		printf("%c", arr[i]);
	}
	return 0;
}