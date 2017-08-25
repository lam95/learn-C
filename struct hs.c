# include <stdio.h>
# include <math.h>
# include <stdlib.h>
# include <string.h>
# include <conio.h>
typedef struct
{
	int nam,thang,ngay;
}ntn;
typedef struct
{
	char ht[30],que[30];
	ntn x;
}hs;
void nhap(hs a[20],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("==> nguoi thu %d\n",i);
		printf("ho va ten:\t");
		gets(a[i].ht);
		printf("nam sinh:\t");
		scanf("%d%*c",&a[i].x.nam);
		printf("thang sinh:\t");
		scanf("%d%*c",&a[i].x.thang);
		printf("ngay sinh:\t");
		scanf("%d%*c",&a[i].x.ngay);
		printf ("que quan:\t");
		gets(a[i].que);
	}
	printf("---------------------\n");
}
void timnam(hs a[20],int n)
{
	int year,ns,i,d=0;
	printf ("nhap nam sinh:");
	scanf("%d",&ns);
	for(i=0;i<n;i++)
	{
		year=a[i].x.nam;
		if(ns==year)
		{
			d=1;
			puts(a[i].ht);
		}
	}
	if (d==0) printf("khong tim thay thong tin\n");
}
 main ()
 {
 	int i,n,ns;
 	hs a[20];
 	printf("nhap vao n:");
 	scanf("%d%*c",&n);
 	nhap(a,n);
 	timnam(a,n);
 	getch;
 	return main();
 }
