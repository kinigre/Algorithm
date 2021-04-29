#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string>
int main() {
	char  geu[51];
	char k;
	int i;
	int result;
	
	scanf("%s", geu);

	k = geu[0];
	result = 10;
	for (i = 1; i < strlen(geu); i++) 
	{
		if (k == geu[i]) 
		{
			result += 5;
		}
		else if (k != geu[i]) {
			result += 10;
			k = geu[i];
		}
	}
	printf("%d", result);
}