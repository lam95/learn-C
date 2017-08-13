# include <stdio.h>
main()
{
	int a[20][20],b[20][20],c[20][20],m,n,p,i,j,k;
	printf("Nhap m,n,p:");
	scanf("%d%d%d",&m,&n,&p);
	puts("Nhap ma tran a");
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	{
		printf("a[%d][%d]=",i,j);
		scanf("%d",&a[i][j]);
	}
	puts("Nhap ma tran b");
	for(i=0;i<n;i++)
	for(j=0;j<p;j++)
	{
		printf("b[%d][%d]=",i,j);
		scanf("%d",&b[i][j]);
	}
	for(i=0;i<m;i++)
	for(j=0;j<p;j++)
	{
		c[i][j]=0;
		for(k=0;k<n;k++)
		c[i][j]=c[i][j]+a[i][k]*b[k][j];
	}
	puts("Ma tran a la");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%d\t",a[i][j]);
		printf("\n");
	}
	puts("Ma tran b la");
	for(i=0;i<n;i++)
	{
		for(j=0;j<p;j++)
		printf("%d\t",b[i][j]);
		printf("\n");
	}
	puts("Ma tran c la");
	for(i=0;i<m;i++)
	{
		for(j=0;j<p;j++)
		printf("%d\t",c[i][j]);
		printf("\n");
	}
}
