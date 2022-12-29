//get &print 2D array of n element

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
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}
