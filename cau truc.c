#include<stdio.h>
#include<stdlib.h>
typedef struct
{
int ns; //nam sinh
char nm[100]; //ho ten
float dtb; //diem trung binh
} student ;
main()
{
student *a; 
int i, N;
printf("Nhap tong so sinh vien: ");
scanf("%d%*c",&N);
puts("Nhap thong tin cua sinh vien");
a = (student*)malloc(N*sizeof(student));
for(i=0; i< N; i++)
{
printf("Ho ten:\t"); gets(a[i].nm);
printf("Nam sinh:\t");
scanf("%d%*c",&((a+i)->ns));
printf("Diem:\t");
scanf("%f%*c",&(a+i)->dtb);
}
printf("-------------------------\n");
printf("Thong tin vua nhap\n");
printf("Ho va ten\tDiem\tNam sinh\n");
for(i=0; i< N; i++)
printf("%s\t%.2f\t%d\n",(a+i)->nm,(a+i)->dtb,(a+i)->ns);
}
