#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void mass () {
	int mas[100][100];
	int n,m;
	
	printf("m=");
	scanf("%d",&m);
	printf("n=");
	scanf("%d",&n);
	
	for(int j=0;j<m;j++)
	{
		for(int i=0;i<n;i++)
		{
			scanf("%i", &mas[j][i]);
		}
	}
	for(int j=0;j<n;j++)
	{
		for(int i=0;i<m;i++)
		{
			printf("%3i", &mas[j][i]);
		}
		printf("\n\n");
	}
}

int main(void)
{
	 mass();
}