# include <stdio.h>
# include <math.h>
# include <stdlib.h>
# include <string.h>


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


