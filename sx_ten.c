#include <stdio.h>
#include <string.h>

int sosanhchuoi(char tensv1[], char tensv2[])
{
	int  i = 0, cach1, cach2;
	char ten1[10];
	char  dem1[10];
	char ho1[10];
	char  ten2[10];
	char dem2[10];
	char  ho2[10];
	
	cach1 = 0;
	while(tensv1[cach1]!=' ') cach1++;
	
	
	cach1 = 0;
	while(tensv2[cach1]!=' ') cach1++;
	
	cach2 = strlen(tensv2)-1;
	while(tensv2[cach2]!=' ') cach2--;
	
	for(i=0;i<cach1;i++)
	{
		ho2[i] = tensv2[i];
	}
	
	for(i=(cach1+1); i< cach2; i++)
	{
		dem2[i-(cach1+1)] = tensv2[i];
	}
	
	for(i=(cach2+1); i < strlen(tensv2); i++)
	{
		ten2[i - (cach2 + 1)] = tensv2[i];
	}
	
	
	if(strcmp(ten1, ten2)!=0) 
	{
	  	return strcmp(ten1, ten2);
    }
	else if(strcmp(dem1, dem2)!=0)
	{ 
	  	return strcmp(dem1, dem2);
	} 	
	else 
	return strcmp(ho1, ho2);	
	
}
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
			for(i=0; i<5;i++)
			{
				for(j = i+1; j<5; j++)
				{
					if(sosanhchuoi(sv[i].hoVaten, sv[j].hoVaten)==1);
					{
						strcpy(t2, sv[i].hoVaten);
						strcpy(sv[i].hoVaten,sv[j].hoVaten);
						strcpy(sv[j].hoVaten, t2);
						strcpy(t2, sv[i].que);
						strcpy(sv[i].que, sv[j].que);
						strcpy(sv[j].que, t2);
						t = sv[i].diem;
						sv[i].diem = sv[j].diem;
						sv[j].diem = t;
					}
				}
			}
			for(i=0;i<5;i++)
			{
				printf("Ho va ten sinh vien %d: %s\n", i, sv[i].hoVaten);
				printf("Que quan sinh vien %d: %s\n", i, sv[i].que);
				printf("Diem sinh vien %d: %d\n", i, sv[i].diem);
				
			}
		}

