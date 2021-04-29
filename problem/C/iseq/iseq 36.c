#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	freopen("input.txt", "r", stdin);
	double arr[10] = { 0. };
	double chk[10] = { 0. };
	double min;
	int su;
	int i;


	for (i = 0; i < 10; i++) {
		scanf("%lf", &arr[i]);
		if (arr[i] < 0) chk[i] = -arr[i];
		else chk[i] = arr[i];
	}

	min = chk[0];
	su = 0;
	for (i = 1; i < 10; i++)
		if (min > chk[i])
		{
			min = chk[i];
			su = i;
		}


	printf("%lg\n", arr[su]);
	return 0;
}