#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	int i, j;
	scanf("%d", &n);
	int star = 1;
	int blank = n/2;//ฐ๘น้
	for (i = 0; i < n; i++) {
		for (j = 0; j < blank;j++) {
			printf("  ");
		}
		
		for (j = 0; j < star; j++) {
			printf("* ");
		}
		printf("\n");

		if (i < n / 2) {
			star += 2;
			blank--;
		}
		else {
			star -= 2;
			blank++;
		}
	}
}