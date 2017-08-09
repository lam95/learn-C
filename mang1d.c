# include<stdio.h>
# include<stdlib.h>
main()
{
	int *a,n=5,i;
	a=malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	puts("Mang a la");
	for(i=0;i<n;i++)
	printf("%d\t",(a+i));
	for(i=0;i<n;i++)
	printf("%d\t",*(a+i));
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	free(a);
}
