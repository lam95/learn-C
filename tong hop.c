# include <stdio.h>
# include <math.h>
# include <stdlib.h>
# include <string.h>


// Ma tran thuong
// nhap ma tran thuong
void nmtt (double a[20][20],int *m,int *n);
// in ma tranthuong
void imtt (double a[20][20],int m,int n);
// copy ma tran thuong
void copymtt (double a[20][20],double b[20][20],int m,int n);
// ktra pivot
void ktpivot (double a[20][20],int j,int m,int r,int *kt);
// hang phan tu nho nhat
int minr (double a[20][20],int r,int m,int j);
// doi vi tri 2 hang
void interchange (double a[20][20],int n,int r1,int r2);
// khu phan tu duoi pivot
void kill (double a[20][20],int j,int n,int m,int r);
// khu phan tu tren pivot
void killup (double a[20][20],int n,int j,int r2);
// xuat hien pivot = 1
void pivot (double a[20][20],int r,int n);
// reduce ma tran thuong
void reduce (double a[20][20],int m,int n);
// chuyen vi ma tran thuong
void chuyenvimtt (double a[20][20],double b[20][20],int m,int n);
// tich 2 ma tran thuong
void tichmtt (double a[20][20],double b[20][20],double c[20][20],int m,int n,int p);

// Ma tran vuong
// nhap ma tran vuong
void nmtv (double a[20][20],int *n);
// in ma tran vuong
void imtv (double a[20][20],int n);
// copy ma tran vuong
void copymtv (double a[20][20],double b[20][20],int n);
// reduce ma tran vuong
void reducemtv (double a[20][20],int n);
// chuyen vi ma tran vuong
void cvmtv (double a[20][20],double b[20][20],int n);
// tich 2 ma tran vuong
void tichmtv (double a[20][20],double b[20][20],double c[20][20],int n);
// lay phan du
void phandu (double a[20][20],double b[20][20],int *n,int i,int j);
// cofactor
void cofactor (double a[20][20],double b[20][20],int m);
// dinh thuc
double det (double a[20][20],int n);
// ma tran nghich dao
void nghichdao (double a[20][20],int n);



main ()
{
	int x,m,n,p,muc=0;
	double dt,a[20][20],b[20][20],c[20][20];
menuc: 
	puts ("- Menu");
	puts ("1, Ma tran");
	puts ("2, Xau ky tu");
	puts ("3, Day, mang");
	puts ("4, Cau truc");
	printf ("Nhap vao 1,2,3 hoac 4: ");
	scanf ("%d",&x);
	switch (x)
	{
		case 1:
			{
				muc=11;
				puts ("- Menu");
				puts ("1.1, Ma tran thuong");
				puts ("1.2, Ma tran vuong");
				printf ("Nhap 1 hoac 2: ");
				scanf ("%d",&x);
				switch (x)
				{
					case 1:
						{
							puts ("Nhap ma tran [A]mxn");
							nmtt (a,&m,&n);
motmot:	
							imtt (a,m,n);
							puts ("- Menu");
							puts ("1.1.1, Reduce row echelon form");
							puts ("1.1.2, Ma tran chuyen vi");
							puts ("1.1.3, Nhan ma tran");
							printf ("Nhap 1,2 hoac 3: ");
							scanf ("%d",&x);
							switch (x)
							{
								case 1:
									{
										copymtt (a,b,m,n);
										reduce (b,m,n);
										imtt (b,m,n);
										goto dieuhuong;
									}
								case 2:
									{
										chuyenvimtt (a,b,m,n);
										imtt (b,n,m);
										goto dieuhuong;
									}
								case 3:
									{
										puts ("Nhap ma tran [B]nxp");
										nmtt (b,&n,&p);
										imtt (b,n,p);
										puts ("Ma tran [C]mxp = [A]mxn x [B]nxp");
										tichmtt (a,b,c,m,n,p);
										imtt (c,m,p);
										goto dieuhuong;
									}
							};
						} break;
					case 2:
						{
							muc=12;
							puts ("Nhap ma tran [A]nxn");
							nmtv (a,&n);
mothai:							
							imtv (a,n);
							puts ("- Menu");
							puts ("1.2.1, Reduce row echelon form");
							puts ("1.2.2, Ma tran chuyen vi");
							puts ("1.2.3, Nhan ma tran");
							puts ("1.2.4, Tinh dinh thuc");
							puts ("1.2.5, Ma tran nghich dao");
							puts ("1.2.6, Cofactor");
							printf ("Nhap 1,2,3,4,5 hoac 6: ");
							scanf ("%d",&x);
							switch (x)
							{
								case 1:
									{
										copymtv (a,b,n);
										reducemtv (b,n);
										imtv (b,n);
										goto dieuhuong;
									}
								case 2:
									{
										cvmtv (a,b,n);
										imtv (b,n);
										goto dieuhuong;
									}
								case 3:
									{
										puts ("Nhap ma tran [B]nxn");
										nmtv (b,&n);
										imtv (b,n);
										puts ("Ma tran [C]nxn = [A]nxn x [B]nxn");
										tichmtv (a,b,c,n);
										imtv (c,n);
										goto dieuhuong;
									}
								case 4:
									{
										dt=det(a,n);
										printf ("Det A = %.3lf \n",dt);
										goto dieuhuong;
									}
								case 5:
									{
										nghichdao (a,n);
										goto dieuhuong;
									}
								case 6:
									{
										cofactor (a,b,n);
										imtv (b,n);
										goto dieuhuong;
									}
							};
						} break;
				};
			} break;
		case 2:
			{
				puts ("- Menu");
				puts ("2.1, Thong tin xau ky tu");
				puts ("2.2, chuan hoa xau");
				puts ("...dang cho cap nhat");
			} break;
		case 3:
			{
				puts ("...dang cho cap nhat");
			} break;
		case 4:
			{
				puts ("...dang cho cap nhat");
			} break;
	};
dieuhuong:
	puts ("Ban muon thuc hien thao tac khac ko?");
	printf ("1. Co \t 2.khong \t 3.ve menu chinh \n");
	printf ("Nhap vao 1,2 hoac 3: ");
	scanf ("%d",&x);
	switch (x)
	{
		case 1:
			{
				if (muc==11) goto motmot;
				else if (muc==12) goto mothai;
				else goto menuc;
			} 
		case 2: break;
		case 3: goto menuc;
	};
	puts ("---the end---");
}





void nmtt (double a[20][20],int *m,int *n)
{
	int i,j;
	printf("Nhap so hang va so cot: ");
	scanf("%d%d",m,n);
	puts("Nhap ma tran");
	for(i=0;i<*m;i++)
	for(j=0;j<*n;j++)
	{
		printf("a[%d][%d]=",i,j);
		scanf("%lf",&a[i][j]);
	}
}

void imtt (double a[20][20],int m,int n)
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

void copymtt (double a[20][20],double b[20][20],int m,int n)
{
	int i,j;
	for (i=0;i<m;i++)
	for (j=0;j<n;j++)
	b[i][j]=a[i][j];
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
		for (k=j;k<n;k++)
		a[i][k]=a[i][k]-c*a[r][k];
	}
}
void killup(double a[20][20],int n,int j,int r2)
{
	int i,k;
	double c;
	for(i=0;i<r2;i++)
	{
		c=(double)a[i][j]/(a[r2][j]);
		for(k=0;k<n;k++)
		a[i][k]=a[i][k]-(c*a[r2][k]);
	}
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

void reduce (double a[20][20],int m,int n)
{
	int i,j,r=0,kt;
	for(j=0;j<n;j++)
	{
		ktpivot(a,j,m,r,&kt);
		if(kt==1) 
		{
			if(a[r][j]==0)
			{
				 i=minr(a,r,n,j);
				 interchange(a,n,r,i);
			}
			 kill(a,j,n,m,r);
			 r=r+1;
		}
		if(r==m-1) break;
	}
	for(i=r;i>0;i--)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]!=0)	killup(a,n,j,i);
			if(a[i][j]!=0) break;
		}
	}
	pivot(a,r,n);
}

void chuyenvimtt (double a[20][20],double b[20][20],int m,int n)
{
	int i,j;
	for (i=0;i<n;i++)
	for (j=0;j<m;j++)
	b[i][j]=a[j][i];
}

void tichmtt (double a[20][20],double b[20][20],double c[20][20],int m,int n,int p)
{
	int i,j,k;
	for (i=0;i<m;i++)
	for (j=0;j<p;j++)
	{
		c[i][j]=0;
		for (k=0;k<n;k++)
		{
			c[i][j]+=a[i][k]*b[k][j];
		}
	}
}


void nmtv (double a[20][20],int *n)
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

void imtv (double a[20][20],int n)
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

void copymtv (double a[20][20],double b[20][20],int n)
{
	int i,j;
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
			b[i][j]=a[i][j];
}

void reducemtv (double a[20][20],int n)
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
			 kill(a,j,n,n,r);
			 r=r+1;
		}
		if(r==n-1) break;
	}
	for(i=r;i>0;i--)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]!=0)	killup(a,n,j,i);
			if(a[i][j]!=0) break;
		}
	}
	pivot(a,r,n);
}

void cvmtv (double a[20][20],double b[20][20],int n)
{
	int i,j;
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
			b[i][j]=a[j][i];
}

void tichmtv (double a[20][20],double b[20][20],double c[20][20],int n)
{
	int i,j,k;
	for (i=0;i<n;i++)
	for (j=0;j<n;j++)
	{
		c[i][j]=0;
		for (k=0;k<n;k++)
		{
			c[i][j]+=a[i][k]*b[k][j];
		}
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

void nghichdao(double a[20][20],int n)
{
	int i,j;
	double d,b[20][20],c[20][20];
	cofactor(a,b,n);
	cvmtv(b,c,n);
	d=det(a,n);
	if(d==0) puts ("A is not invertible matrix");
	else
	{
		for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			b[i][j]=(c[i][j])/d;
		imtv (b,n);
	}
}
