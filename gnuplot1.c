#include <stdio.h>
#include <math.h>

main()
{
	FILE *gnplt;
	gnplt = popen("c:/gnuplot/bin/gnuplot","w");
	fprintf(gnplt,"plot sin(x)\n");
	fflush(gnplt);
	printf("press any key to continue \n");
	getch();
	fprintf(gnplt,"exit\n");
	pclose(gnplt);
}
