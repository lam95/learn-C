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
printf("cac so nguyen to trong mang a la: ");
for(i=0;i<n;i++)
{
	if(a[i]>1)
	{
		for(j=2;a[i]%j!=0;j++);
		if(j==a[i]) printf("%d \t",a[i]);	
	}
}
}
