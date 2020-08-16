#include <stdio.h>
int main()
{
	int a[20], n = 0, m = 0;
	printf("Input number\n");
	for (int i = 1; i <= 10; i++)
	{
		printf("a[%d]=", i);
		scanf_s("%d", &a[i]);
	}
	printf("Even number is ");
	for (int j = 1; j <= 10; j++)
	{
		if (a[j] % 2 == 0)
		{
			printf("%d ", a[j]);
			n++;
		}

	}
	printf("\nTotal = %d", n);
	printf("\nOod number is ");
	for (int k = 1; k <= 10; k++)
	{
		if (a[k] % 2 != 0)
		{
			printf("%d ", a[k]);
			m++;
		}

	}
	printf("\nTotal = %d", m);
	return 0;
}