#include <stdio.h>
#include <iostream>

int LSearch(int ar[], int len, int target)	// ���� Ž�� �˰��� ����� �Լ�
{
	for (int i = 0; i < len; i++)
		if (ar[i] == target)
			return i;	// ã�� ����� �ε��� �� ��ȯ

	return -1;	// ã�� �������� �ǹ��ϴ� �� ��ȯ
}

int main()
{
	int arr[] = { 3,5,2,4,9 };
	int idx;



	return 0;
}
