#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char arr[20] = { '\0' };
	int cnt = 0;
	for (int j = 0; j < 5; j++) {
		scanf(" %[^\n]", arr);
		for (int i = 0; i <= strlen(arr); i++) {
			if (arr[i] == 'A') {
				cnt++;
			}
		}
		printf("%d", cnt);
		cnt = 0;
	}
	return 0;
}