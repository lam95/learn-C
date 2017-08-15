# include <stdio.h>
nmt(float a[20][20],int *m,int *n)
{
	int i,j;
	printf("Nhap m va n:");
	scanf("%d%d",m,n);
	puts("Nhap ma tran");
	for(i=0;i<*m;i++)
	for(j=0;j<*n;j++)
	scanf("%f",&a[i][j]);
}
imt(float a[20][20],int m,int n)
{
	int i,j;
	puts("Ma tran");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%f\t",a[i][j]);
		printf("\n");
	}
}
main()
{
	float a[20][20],t;
	int i=0,j=0,m,n;
	nmt(a,&m,&n);
	imt(a,m,n);
	if(a[i][j]!=0)
	{
	for(i=0;i<m;i++)
	{
	t=a[i][j];
	for(j=0;j<n;j++)
	a[i][j]=a[i][j]/t;
	j=0;
	}
	imt(a,m,n);
	}
}
