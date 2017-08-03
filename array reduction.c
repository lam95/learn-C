#include <stdio.h>
main()
{
int a[30],n,i,j;
printf("Nhap n: ");
scanf("%d",&n);
puts("Nhap cac phan tu cua mang");
for(i=0;i<n;i++)
{
	printf("a[%d]=",i);
	scanf("%d",&a[i]);
}
printf("a=");
for(i=0;i<n;i++)
{
	for(j=0;a[j]!=a[i];j++);
	if(i==j) printf("%d\t",a[i]);
}
}
