#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void distinction(char ch, int cnt)//���ڰ�
{
	int k;
	if (cnt >= 5) //cnt ���ڰ��� 5���� ���ų� ũ��
	{
		printf("%c(%d)", ch, cnt);
	}
	else //�ƴϸ�
	{
		for (k = 1; k <= cnt; k++)//k��1���� cnt���� �ݺ� 
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

	scanf("%s", arr);//�Է°� �Է�

	n = strlen(arr);//�Է°� ���̸� n���ٰ� ����
	ch = arr[0];//ch���ٰ� arr[0]�� �� A�� ����
	for (i = 0; i <=n; i++)//i�� n���� �ݺ� 
	{
		if (ch == arr[i]) //���� ch �� A�� arr[i]���̶� ���ٸ�
		{
			cnt++;//cnt�� 1��ŭ ���� ����;
		}
		else 
		{
			distinction(ch, cnt);//distinction�� �Լ��� ch���̶� cnt���� �ҷ���(�ڵ� 4�� �̵�)
			ch = arr[i];//ch�� arr[i]�濡 ����
			cnt = 1;//cnt�� 1�� ����;
		}
	}
	printf("\n");
	return 0;

}