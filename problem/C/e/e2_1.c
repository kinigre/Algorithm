#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int l = 0, k = 0;
	char arr[5][15] = { '\0' };

	for (int i = 0; i < 5; i++) {
		scanf("%s",&arr[i]);
	}

	for (l = 0; l < 15; l++) {
		for (k = 0; k < 5; k++) {
			if (arr[k][l] != '\0') {
				printf("%c", arr[k][l]);
			}
		}
	}
	return 0;
}