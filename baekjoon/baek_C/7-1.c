#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	char n=NULL;
	int chg = 0;

	scanf("%c",&n);
	
	chg = (int)n;

	if (chg <= 122 && chg >= 97){
		printf("%d", chg);
	}
	else if (chg <= 90 && chg >= 65) {
		printf("%d", chg);
	}
	else if (chg <= 57 && chg >= 48) {
		printf("%d", chg);
	}

	return 0;
}