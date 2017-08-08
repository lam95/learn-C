# include <stdio.h>
# include <math.h>
# include <stdlib.h>

 main ()
 {
 	double x,y,h,a,b;
 	FILE *p;
 	p=fopen("toado.txt","w");
 	h=(double)2*M_PI/40;
	for(x=-M_PI;x<=M_PI;x=x+h)
 	{
 		y=sin(x);
 		fprintf(p,"%f\t%f\n",x,y);
 	}
 	puts("xong");
	fclose(p);
	fopen("toado.txt","r");
	while (feof(p)==0)
	{
		fscanf(p,"%lf%lf",&a,&b);
		printf("%.3lf\t%.3lf\n",a,b);
	}
	fclose(p);
 }
