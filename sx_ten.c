#include <stdio.h>
#include <string.h>

int main()
{
	struct sinhVien sv[5];
	int  t, j, i = 0;
	char t2[100]="anh nho em";
	for(i=0;i<5;i++)
	{
		printf("Ho va ten sinh vien %d:\n", i);
		fflush(stdin);
	    gets(sv[i].hoVaten);
	    printf("Que quan sinh vien %d:\n", i);
	    fflush(stdin);
	    gets(sv[i].que);
	    printf("Diem cua sinh vien %d:\n", i);
	    scanf("%d", &sv[i].diem);
	}
	for(i=0;i<5;i++)
	{
		printf("Ho va ten sinh vien %d: %s\n", i, sv[i].hoVaten);
		printf("Que quan sinh vien %d: %s\n", i, sv[i].que);
		printf("Diem sinh vien %d: %d\n", i, sv[i].diem);
		
	}
}

