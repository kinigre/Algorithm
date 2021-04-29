#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[10][20] = { 0 };
	int n;
	int i, j;
	scanf("%d", &n);
    arr[0][n] = 1;
    for (i = 1; i < n; i++) {
        for (j = 1; j < n*2; j++) {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j + 1];
        }
        
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n*2; j++) {
            if (arr[i][j] != 0) {
                printf("%d\t", arr[i][j]);

            }
        }
        printf("\n");
    }
    return 0;
}
