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
void nghichdao(double a[20][20],double b[20][20],int n)
{
	int i,j;
	double d,c[20][20];
	cofactor(a,b,n);
	chuyenvi(b,c,n);
	d=det(a,n);
	if(d!=0)
	{
		for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			b[i][j]=(c[i][j])/d;
	}
}
void ktpivot(double a[20][20],int j,int n,int r1,int *kt)
{
	int i;
	*kt=0;
	for(i=r1;i<n;i++)
	{
		if(a[i][j]!=0) *kt=1;
		if(*kt==1) break;
	}
}
int minr(double a[20][20],int r,int n,int j)
{
	int k,hang;
	double nn;
	for(k=r;a[k][j]==0;k++);
	nn=a[k][j];
	for(k=r;k<n;k++)
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
void kill (double a[20][20],int j,int n,int r1)
{
	int i,k;
	double c;
	for(i=r1+1;i<n;i++)
	{
		c=(double)a[i][j]/a[r1][j];
		for (k=j;k<n;k++)
			a[i][k]=a[i][k]-(double)c*a[r1][k];
	}
}
void killup(double a[20][20],int n,int j,int r2)
{
	int i,k;
	double c;
	for(i=0;i<r2;i++)
	{
		c=a[i][j]/a[r2][j];
		for(k=j;k<n;k++)
			a[i][k]=a[i][k]-(double)c*a[r2][k];
	}
}
double duongcheo(double a[20][20],int n)
{
	int i;
	double d=1;
	for(i=0;i<n;i++)
		d=d*a[i][i];
	return d;
}
void pivot(double a[20][20],int r,int n)
{
	int i,j;
	double c=0;
	for(i=0;i<=r;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]!=0) c=a[i][j];
			if(a[i][j]!=0) break;
		}
		for(j=0;j<n;j++)
			a[i][j]=a[i][j]/c;
	}
}
void echelon(double a[20][20],int n)
{
	int i,j,r=0,kt;
	for(j=0;j<n;j++)
	{
		ktpivot(a,j,n,r,&kt);
		if(kt==1) 
		{
			if(a[r][j]==0)
			{
				 i=minr(a,r,n,j);
				 interchange(a,n,r,i);
			}
			 kill(a,j,n,r);
			 r=r+1;
		}
	}
	for(i=r;i>0;i--)
		for(j=0;j<n;j++)
		{
			if(a[i][j]!=0)
				killup(a,n,j,i);
			if(a[i][j]!=0) break;
		}
	pivot(a,r,n);
}
