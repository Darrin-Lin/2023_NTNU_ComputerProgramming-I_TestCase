#include <stdio.h>
#include <stdint.h>
#include "./myge.h"

int main()
{
	int32_t size = 0;
	int32_t nul = 0;
	scanf("%d", &nul);
	if (nul == 0)
	{
		scanf("%d", &size);
		int32_t A[size][size];
		int32_t y[size];
		int32_t *x = NULL;
		for (int32_t i = 0; i < size; i++)
		{
			for (int32_t j = 0; j < size; j++)
			{
				scanf("%d", &A[i][j]);
			}
		}
		for (int32_t i = 0; i < size; i++)
		{
			scanf("%d", &y[i]);
		}
		int32_t return_value = gaussian_elimination(size, &A[0][0], &y[0], &x);
		printf("return: %d\n", return_value);
		printf("x = [");
		if (return_value == 1)
		{
			for (int32_t i = 0; i < size; i++)
			{	
				printf("%d ", *(x+i));
			}
			printf("]^T\n");
		}
		free(x);
	}
	else if (nul == -1)
	{
		int32_t A[2][2] = {0};
		int32_t y[2] = {0};
		int32_t *x = NULL;
		int32_t return_value = gaussian_elimination(0, &A[0][0], y, &x);
		printf("return: %d\n", return_value);
	}
	else
	{
		int32_t *x = NULL;
		int32_t return_value = gaussian_elimination(1, NULL, NULL, &x);
		printf("return: %d\n", return_value);
	}
	
	return 0;
}