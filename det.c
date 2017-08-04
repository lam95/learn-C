# include <stdio.h>
# include <math.h>
void nmt(double a[20][20],int *n);

void imt(double a[20][20],int n);

void ktpivot(double a[20][20],int j,int n,int r1,int *kt);

int minr(double a[20][20],int r,int n,int j);

void interchange(double a[20][20],int n,int r1,int r2);

void kill (double a[20][20],int j,int n,int r1);

double det(double a[20][20],int n);

main()
{
	double deta=1, a[20][20];
	int n,i,j,r=0,kt;
	nmt(a,&n);
	imt(a,n);
	for(j=0;j<n;j++)
	{
		ktpivot(a,j,n,r,&kt);
		if(kt==1) 
		{
			if(a[r][j]==0)
			{
				 i=minr(a,r,n,j);
				 interchange(a,n,r,i);
				 deta=(-1)*deta;
			}
			 kill(a,j,n,r);
			 r=r+1;
		}
		if(r==n-1) break;
	}
	deta*=det(a,n);
	imt(a,n);
	printf("det a=\t%lf",deta);
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

