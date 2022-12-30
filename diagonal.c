
//6.diagonal
#include<stdio.h>
main()
{
	int n,m;
	printf("enter size of array a[n]:");
	scanf("%d",&n);
	printf("enter size of array a[m]:");
	scanf("%d",&m);
	
	
	int a[n][m];
	int i,j;
	int sum=0;

	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("enter value [%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i==j)
			{
				sum+=a[i][j];
		
			}
	
		}	
		printf("\n");
	}
		printf("%d\n",sum);	
}
