# include <stdio.h>
# include <math.h>

void nmt(double a[20][20],int *m,int *n);

void imt(double a[20][20],int m,int n);

void ktpivot(double a[20][20],int j,int m,int r1,int *kt);

int minr(double a[20][20],int r,int n,int j);

void interchange(double a[20][20],int n,int r1,int r2);

void kill (double a[20][20],int j,int n,int m,int r1);

void killup(double a[20][20],int n,int j,int r2);

void pivot(double a[20][20],int r,int n);

main()
{
	double deta=1, a[20][20];
	int m,n,i,j,r=0,kt;
	nmt(a,&m,&n);
	imt(a,m,n);
	for(j=0;j<n;j++)
	{
		ktpivot(a,j,m,r,&kt);
		if(kt==1) 
		{
			if(a[r][j]==0)
			{
				 i=minr(a,r,n,j);
				 interchange(a,n,r,i);
				 deta=(-1)*deta;
		 		 imt(a,m,n);
			}
			 kill(a,j,n,m,r);
			 imt(a,m,n);
			 r=r+1;
		}
		if(r==m-1) break;
	}
	for(i=r;i>0;i--)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]!=0)
			{
				printf("a[%d][%d]=%.3lf\n",i,j,a[i][j]);
				killup(a,n,j,i);
				imt(a,m,n);
			}
			if(a[i][j]!=0) break;
		}
	}
	pivot(a,r,n);
	imt(a,m,n);
}
void nmt(double a[20][20],int *m,int *n)
{
	int i,j;
	printf("Nhap m,n:");
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

