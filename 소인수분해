#include <stdio.h>
int main()
{
	int N, i, arr[1000], j;
	scanf("%d", &N);
	arr[0] = 0;
	arr[1] = N;
	j = 1;
	for (i = 2;arr[j] / i != 0;i++)
	{
		while (arr[j] % i == 0)
		{
			arr[j + 1] = arr[j] / i;
			printf("%d", i);
			printf("\n");
			j++;
		}
	
	}
	return 0;
}
