# include <stdio.h>
# include <math.h>

void nmt(double a[20][20],int *m,int *n);

void imt(double a[20][20],int m,int n);

void copymatrix(double a[20][20],double b[20][20],int m,int n);

void chuyenvi(double a[20][20],double b[20][20],int m,int n);

void phandu(double a[20][20],double b[20][20],int *m,int *n,int i,int j);

void ktpivot(double a[20][20],int j,int m,int r,int *kt);

int minr(double a[20][20],int r,int n,int j);

void interchange(double a[20][20],int n,int r1,int r2);

void kill (double a[20][20],int j,int n,int m,int r);

void killup(double a[20][20],int n,int j,int r2);

void pivot(double a[20][20],int r,int n);

void echelon(double a[20][20],int m,int n);

main()
{
	
}
void nmt(double a[20][20],int *m,int *n)
{
	int i,j;
	printf("Nhap m va n:");
	scanf("%d%d",m,n);
	puts("Nhap ma tran");
	for(i=0;i<*m;i++)
	for(j=0;j<*n;j++)
	{
		printf("a[%d][%d]=",i,j);
		scanf("%lf",&a[i][j]);
	}
}
void imt(double a[20][20],int m,int n)
{
	int i,j;
	puts("Ma tran");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%.3lf\t",a[i][j]);
		printf("\n");
	}
}
void copymatrix(double a[20][20],double b[20][20],int m,int n)
{
	int i,j;
	for (i=0;i<m;i++)
	for (j=0;j<n;j++)
	b[i][j]=a[i][j];
}
void chuyenvi(double a[20][20],double b[20][20],int m,int n)
{
	int i,j;
	for (i=0;i<n;i++)
	for (j=0;j<m;j++)
	b[i][j]=a[j][i];
}
void phandu(double a[20][20],double b[20][20],int *m,int *n,int i,int j)
{
	int k,p,w;
	*m=*m-1;
	*n=*n-1;
	for(k=0;k<*m;k++)
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
void ktpivot(double a[20][20],int j,int m,int r,int *kt)
{
	int i;
	*kt=0;
	for(i=r;i<m;i++)
	{
		if(a[i][j]!=0) *kt=1;
		if(*kt==1) break;
	}
}
int minr(double a[20][20],int r,int m,int j)
{
	int k,hang;
	double nn;
	for(k=r;a[k][j]==0;k++);
	nn=a[k][j];
	for(k=r;k<m;k++)
	{
		if(a[k][j]!=0)
		if(fabs(a[k][j])<=nn)
			hang=k;
	}
	return hang;
}
void interchange(double a[20][20],int n,int r1,int r2)
{
	double x;
	int j;
	for(j=0;j<n;j++)
	{
		x=a[r1][j];
		a[r1][j]=a[r2][j];
		a[r2][j]=x;
	}
}
void kill (double a[20][20],int j,int n,int m,int r)
{
	int i,k;
	double c;
	for(i=r+1;i<m;i++)
	{
		c=(double)a[i][j]/(a[r][j]);
		printf("c[%d]=%.3lf\n",i,c);
		for (k=j;k<n;k++)
		a[i][k]=a[i][k]-c*a[r][k];
	}
}

