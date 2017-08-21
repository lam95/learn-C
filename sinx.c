# include <stdio.h>
# include <math.h>

double giaithua(int n)
{
	if (n>1) return(n*giaithua(n-1));
	else return(1);
}

main ()
{
	double sin=0, u=1, x=0;
	int i=1;
	
	printf ("Nhap x:");
	scanf ("%lf",&x);
	
	for(i=1; (u<-0.00001) || ( u>0.0001); i++)
	{
		u = pow(-1,i-1)*pow(x,2*i-1)/giaithua(2*i-1);
		sin += u;
		
	}
	printf("i=%d\nu=%lf\n",i,u);
	
	printf ("sin(x) = %lf", sin);
}
