# include <stdio.h>
# include <math.h>
double giaithua(int n)
{
	if (n>1) return(n*giaithua(n-1));
	else return(1);
}
main ()
{
	double e=1, u=1;
	int i,x;
	printf ("Nhap x:");
	scanf ("%d",&x);
	for(i=1;u>0.00001 ;i++)
	{
		u=pow(x,i)/giaithua(i);
		e=e+u;
	}
	printf ("e^x sap xi = %lf",e);
}
