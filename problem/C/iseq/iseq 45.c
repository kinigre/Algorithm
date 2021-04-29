#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char arr[20] = { '\0' };
	scanf(" %[^\n]", arr);
	for (int i = 0; i < strlen(arr); i++) {
		if(arr[i]>='A'&&arr[i]<='Z'){
			printf("%c", arr[i] + 32);
		}
		else if (arr[i] >= 'a' && arr[i] <= 'z') {
			printf("%c", arr[i] - 32);
		}
		else if (arr[i] == ' ') {
			printf(" ");
		}
	}
}