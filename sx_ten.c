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
	
	cach2 = strlen(tensv1)-1;
	while(tensv1[cach2]!=' ') cach2--;
	
	for(i=0;i<cach1;i++)
	{
		ho1[i] = tensv1[i];
	}
	
	for(i=(cach1+1); i< cach2; i++)
	{
		dem1[i-(cach1+1)] = tensv1[i];
	}
	
	for(i=(cach2+1); i < strlen(tensv1); i++)
	{
		ten1[i - (cach2 + 1)] = tensv1[i];
	}
	
	
	
}

