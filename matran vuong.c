# include <stdio.h>
# include <math.h>
/* 1,nhap ma tran */
void 	nmt			(double a[20][20],int *n);
/* 2, in ma tran */
void 	imt			(double a[20][20],int n);
/* 3, copy ma tran a vao b */
void 	copymatrix	(double a[20][20],double b[20][20],int n);
/* 4, chuyen vi a thanh b */
void 	chuyenvi	(double a[20][20],double b[20][20],int n);
/* 5, tinh dinh thuc ma tran vuong */
double  det			(double a[20][20],int n);
/* 6, tim ma tran nghich dao */
void    nghichdao   (double a[20][20],double b[20][20],int n);
/* 7, reduce echelon form */
void    echelon		(double a[20][20],int n);
/* 8, tich duong cheo chinh */
double  duongcheo	(double a[20][20],int n);
// Ham phu tro
// 1,lay phan du A<i/j>
void 	phandu		(double a[20][20],double b[20][20],int *n,int i,int j);
// 2,tinh cofactor
void    cofactor	(double a[20][20],double b[20][20],int m);
// 3,ktra xem co phai pivot column ko
void    ktpivot		(double a[20][20],int j,int n,int r1,int *kt);
// 4,tim hang co so dau hang nho nhat
int 	minr		(double a[20][20],int r,int n,int j);
// 5,doi cho 2 hang r1 va r2
void    interchange (double a[20][20],int n,int r1,int r2);
// 6,khu cac phan tu duoi pivot
void    kill	    (double a[20][20],int j,int n,int r1);
// 7,khu cac phan tu tren pivot
void    killup		(double a[20][20],int n,int j,int r2);
// 8,lam xuat hien pivot = 1
void    pivot		(double a[20][20],int r,int n);

main()
{
	double a[20][20],b[20][20],x;
	int n;
	nmt(a,&n);
	imt(a,n);
	chuyenvi(a,b,n);
	imt(b,n);
	x=det (a,n);
	printf("det a = %.3lf\n",x);
	nghichdao(a,b,n);
	puts("nghich dao");
	imt(b,n);
	copymatrix(a,b,n);
	echelon(b,n);
	imt(b,n);
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
void copymatrix(double a[20][20],double b[20][20],int n)
{
	int i,j;
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
			b[i][j]=a[i][j];
}
void chuyenvi(double a[20][20],double b[20][20],int n)
{
	int i,j;
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
			b[i][j]=a[j][i];
}
