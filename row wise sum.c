//row wise sum

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
	int sumR;
	
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
			
			sumR+=a[i][j];
			
		}
		printf("sumR%d\n",sumR);
		sumR=0;
		
		printf("\n");
	}
		
}
