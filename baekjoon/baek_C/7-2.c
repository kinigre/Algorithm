#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n = 0;
	char arr[100] = { '\0' };

	scanf("%d", &n);
	if (n > 100 || n < 1) {
		return 0;
	}
	
	arr[n] = scanf("%s",arr);
	printf("%s", arr);
}