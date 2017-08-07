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
