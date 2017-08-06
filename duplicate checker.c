#include <stdio.h>
main()
{
int a[30],n,i,j,dem;
printf("Nhap n: ");
scanf("%d",&n);
puts("Nhap cac phan tu cua mang");
for(i=0;i<n;i++)
{
	printf("a[%d]=",i);
	scanf("%d",&a[i]);
}
printf("duplicate element= ");
for(i=0;i<n;i++)
{
	dem=0;
	for(j=0;j<n;j++)
	if(a[j]==a[i]) dem=dem+1;
	if(dem>1)
	{
		for(j=0;a[j]!=a[i];j++);
		if (j==i) printf("%d\t",a[i]);
	}
}
}
