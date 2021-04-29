#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[4] = { 0 };
	int x, y;
	int max;
	for (int i = 0; i < 4; i++) {
		scanf("%d %d",&y,&x);
		if (i == 0) 
		{
			arr[i] = x;
		}
		else
		{
			arr[i] = arr[i - 1] - y + x;
		}
	}
	max = arr[0];
	for (int i = 1; i < 4; i++) {
		if (max < arr[i]) 
		{
			max = arr[i];
		}
	}
	printf("%d", max);
	return 0;
}