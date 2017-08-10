# include <stdio.h>
# include <math.h>

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

