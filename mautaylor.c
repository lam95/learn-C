#include <stdio.h>
#include <math.h>
double GiaiThua (int a);
main()
{
double x,k=1,n=0,S=0;
printf("\n Nhap vao so x de tinh e^x: ");
scanf("%lf",&x);
while(k>0.00001)
{
k=pow(x,n)/GiaiThua(n);
S=S+k;n++;
}
printf(" => Gia tri xap xi cua e^x la: %lf\n",S);
return main();
}
double GiaiThua (int a)
{
if(a<=1)return 1;
else return a*GiaiThua(a-1);
}
