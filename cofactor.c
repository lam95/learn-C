# include <stdio.h>
# include <math.h>
void nmt(double a[20][20],int *n);

void imt(double a[20][20],int n);

void phandu(double a[20][20],double b[20][20],int *n,int i,int j);

main ()
{
	double d,a[20][20],b[20][20];
	int n;
	nmt(a,&n);
	imt(a,n);
	d=det(a,n);
	printf("det a=\t%.3lf\n",d);
	if(d!=0)
	{
		nghichdao(a,b,n);
		puts("Ma tran nghich dao");
		imt(b,n);
	}
}
void nmt(double a[20][20],int *n)
{
	int i,j;
	printf("Nhap n:");
	scanf("%d",n);
	puts("Nhap ma tran");
	for(i=0;i<*n;i++)
	for(j=0;j<*n;j++)
	{
		printf("a[%d][%d]=",i,j);
		scanf("%lf",&a[i][j]);
	}
}
void imt(double a[20][20],int n)
{
	int i,j;
	puts("Ma tran");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%.3lf\t",a[i][j]);
		printf("\n");
	}
}
void phandu(double a[20][20],double b[20][20],int *n,int i,int j)
{
	int k,p,w;
	*n=*n-1;
	for(k=0;k<*n;k++)
	{
		if(k<i) p=k;
		else p=k+1;
		for(w=0;w<*n;w++)
		{
			if(w<j) b[k][w]=a[p][w];
			else b[k][w]=a[p][w+1];
		}
	}
}
