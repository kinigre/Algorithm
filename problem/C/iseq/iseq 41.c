#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int n;
	char name[10][10];
	int score[10];
	int top[10];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s %d", &name[i], &score[i]);
		top[i] = 1;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (score[i] < score[j]) {
				++top[i];
			}
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%s %d\n", name[i], top[i]);
	}
}