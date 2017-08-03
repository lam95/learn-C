# include <stdio.h>
# include <math.h>
void nmt(double a[20][20],int *n);

void imt(double a[20][20],int n);

void phandu(double a[20][20],double b[20][20],int *n,int i,int j);

void cofactor(double a[20][20],double b[20][20],int n);

double det(double a[20][20],int n);

void chuyenvi(double a[20][20],double b[20][20],int n);

void nghichdao(double a[20][20],double b[20][20],int n);

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
void cofactor(double a[20][20],double b[20][20],int m)
{
	int  k,i,j;
	k=m;
	double x,c[20][20];
	for (i=0;i<m;i++)
	for (j=0;j<m;j++)
	{
		phandu(a,c,&m,i,j);
		x=det(c,m);
		b[i][j]=pow(-1,i+j)*x;
		m=k;
	}
}
double det(double a[20][20],int n)
{
	double b[20][20],x=0;
	int j;
	if(n==1) x=a[0][0];
	else
	{
		cofactor(a,b,n);
		for(j=0;j<n;j++)
			x=x+a[1][j]*b[1][j];
	}
	return x;
}
void chuyenvi(double a[20][20],double b[20][20],int n)
{
	int i,j;
	for (i=0;i<n;i++)
	for (j=0;j<n;j++)
	b[i][j]=a[j][i];
}
void nghichdao(double a[20][20],double b[20][20],int n)
{
	int i,j;
	double d,c[20][20];
	cofactor(a,b,n);
	chuyenvi(b,c,n);
	d=det(a,n);
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
		b[i][j]=(c[i][j])/d;
}
