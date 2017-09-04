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
	
}


