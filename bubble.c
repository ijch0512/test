#include <stdio.h>

int main(void)
{
	int n[4] = { 0 }, i, j, temp = 0;

	scanf("%d %d %d %d", &n[0], &n[1], &n[2], &n[3]);
	for(i = 0; i < 3; i++)
	{
		for(j =0; j < 3; j++)
		{
			if(n[j] > n[j + 1])
			{
				temp = n[j + 1];
				n[j + 1] = n[j];
				n[j] = temp;
			}
		}
	}
	printf("%d %d %d %d\n", n[0], n[1], n[2], n[3]);

	return 0;
}
