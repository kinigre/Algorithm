#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void distinction(char ch, int cnt)//인자값
{
	int k;
	if (cnt >= 5) //cnt 인자값이 5보다 같거나 크면
	{
		printf("%c(%d)", ch, cnt);
	}
	else //아니면
	{
		for (k = 1; k <= cnt; k++)//k는1부터 cnt까지 반복 
		{
			printf("%c", ch);
		}
	}

}
int main() {
	char arr[20] = { '\0' };
	char ch;
	int cnt = 0;
	int i;
	int n;

	scanf("%s", arr);//입력값 입력

	n = strlen(arr);//입력값 길이를 n에다가 저장
	ch = arr[0];//ch에다가 arr[0]방 즉 A를 저장
	for (i = 0; i <=n; i++)//i는 n까지 반복 
	{
		if (ch == arr[i]) //만약 ch 즉 A가 arr[i]방이랑 같다면
		{
			cnt++;//cnt는 1만큼 후위 증가;
		}
		else 
		{
			distinction(ch, cnt);//distinction의 함수에 ch값이랑 cnt값을 불러옴(코드 4로 이동)
			ch = arr[i];//ch는 arr[i]방에 저장
			cnt = 1;//cnt는 1로 저장;
		}
	}
	printf("\n");
	return 0;

}