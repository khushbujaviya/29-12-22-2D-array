//average

#include<stdio.h>
main()
{
	int n,m;
	printf("enter size of array a[n]:");
	scanf("%d",&n);
	printf("enter size of array a[m]:");
	scanf("%d",&m);
	
	
	int a[n][m];
	int i,j,sum=0;
	int avg;
	 

	
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
			printf("%d\n",a[i][j]);
			sum=sum+a[i][j];
			
		}
		
	
	}
	avg=sum/(n*m);
	printf("average= %d\n",avg);
		}

