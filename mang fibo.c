# include <stdio.h>
# include <stdlib.h>
main()
{
	int *a,i,n;
	printf("Nhap vao n:");
	scanf("%d",&n);
	a=malloc((n+1)*sizeof(int));
	*(a)=0;
	*(a+1)=1;
	for(i=2;i<=n;i++)
	*(a+i)=*(a+i-1)+*(a+i-2);
	puts("Day Fibonacci n phan tu la:");
	for(i=0;i<=n;i++)
	printf("F[%d]=%d\t",i,*(a+i));
	free(a);
}
