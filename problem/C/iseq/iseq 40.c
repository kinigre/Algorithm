#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char arre[10] = { 'Y','B','K','E','A','R','N','D','O','G' };
	char ins[10] = { '\0' };
	scanf("%s", ins);
	for (int i = 0; i < strlen(ins); i++) {
		printf("%c", arre[ins[i] - '0']);
	}

}