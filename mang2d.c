# include <stdio.h>
# include <stdlib.h>
main()
{
	int *a, i,j,m,n;
	printf("Nhap vao m,n:");
	scanf("%d%d",&m,&n);
	a=malloc(m*n*sizeof(int));
	puts("Nhap ma tran a");
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	{
		printf("a[%d][%d]=",i,j);
		scanf("%d",(a+i*n+j));
	}
	puts("Ma tran a la");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%d\t",*(a+i*n+j));
		printf("\n");
	}
	free(a);
}
