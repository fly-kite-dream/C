#include<stdio.h>
#include<iostream>
#include<algorithm>
#pragma warning(disable:4996)
int main()
{
	int n;
	scanf("%d", &n);
	int* A = (int*)calloc(n, sizeof(int));
	int goal = 0;
	for (int i = 0; i < n; i++)
	{
		int num; scanf("%d", &num); A[i] = num;
	}
	for (int i = 2; i <= n; i++)
	{
		int Index = 0;
		for (int a = n + 1 - i; a > 0; a--)
		{
			if (Index > n-i)break;
			else {
				int* arr = (int*)calloc(i, sizeof(int));//����
				for (int index = 0; index < i; index++)
				{

					arr[index] = A[Index+index];
					

				}
				Index++;
				std::sort(arr, arr + i);
				goal = goal + arr[i - 2];//�ۼӴ�Сֵ
			}
		}
	}
	std::cout << goal;
}
