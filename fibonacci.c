# include <stdio.h>
main ()
{
	int i,n,a[30];
	printf ("Nhap vao n:");
	scanf ("%d",&n);
	puts("Day Fibonacci la:");	
	for (i=0;i<=n;i++)
	{
	if(i==0) a[i]=0;
	else if(i==1) a[i]=1;
	else a[i]=a[i-1]+a[i-2];
	printf ("F[%d]=%d\t",i,a[i]);
	}
}
