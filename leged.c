# include <stdio.h>
# include <math.h>
# include <stdlib.h>
# include <string.h>
# include <conio.h>
float legendre(int n,float x);
 main ()
 {
 	int n;
 	float a,b,x,leg;
 	FILE *p;
 	printf("nhap n va a va b:");
 	scanf("%d%f%f",&n,&a,&b);
 	p=fopen("legendre.txt","w");
 	for(x=a;x<=b;x=x+0.1)
 	{
 		leg=legendre(n,x);
 		printf("x=%.2f \t p(%d)=%.2f\n",x,n,leg);
 		fprintf(p,"%f\t%f\n",x,leg);
 	}
 	puts("xong");
	fclose(p);
 	p=fopen("legendre.txt","r");
	while(feof(p)==0)
 	{
 		fscanf(p,"%f%f",&x,&leg);
 		printf("%.2f\t%.2f\n",x,leg);
 	}
 	fclose(p);
 }
float legendre(int n,float x)
{
	int i;
	float p0=1,p1=x,p2;
	if (n==0) return 1;
	if (n==1) return x;
	if (n>1)
	{
		for(i=2;i<=n;i++)
		{
			p2=((float)(2*i-1)/i)*x*p1-((float)(i-1)/i)*p0;
			p0=p1;
			p1=p2;
		}
		return p2;
	}
}
