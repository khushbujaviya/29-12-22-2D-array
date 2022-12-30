//addition

#include<stdio.h>
main()
{
	int n,m;
	printf("enter size of array a[n]:");
	scanf("%d",&n);
	printf("enter size of array a[m]:");
	scanf("%d",&m);
	
	
	int a[n][m];
	int b[n][m];
	int s[n][m];
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
			printf("enter value [%d][%d]",i,j);
			scanf("%d",&b[i][j]);
			
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
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		 printf("%d",b[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			s[i][j]=a[i][j]+b[i][j];
		 printf("%d",s[i][j]);
		}
		printf("\n");
	}
}
		

