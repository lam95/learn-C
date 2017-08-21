# include <stdio.h>
# include <math.h>
# include <stdlib.h>
# include <string.h>
# include <conio.h>
typedef struct
{
	char name[30];
	char que[30];
	float dtb;
} sv;
void nhap(sv a[30],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("==> sinh vien %d\n",i+1);
		printf("ho ten:\t");
		gets(a[i].name);
		printf("que quan:\t");
		gets(a[i].que);
		printf("dtb:\t");
		scanf("%f%*c",&a[i].dtb);
	}
	puts("----------------------");
}
void insv(sv a[30],int n)
{
	int i;
	printf("ho va ten \tque quan \tdtb\n");
	for(i=0;i<n;i++)
		printf("%s\t%s\t%f\n",a[i].name,a[i].que,a[i].dtb);
	puts("het");
}
int ten(char a[30])
{
	int i;
	char x;
	for(i=strlen(a)-1;a[i]!=' ';i--);
	x=a[i+1];
	return x;
}
 main ()
 {
 }
