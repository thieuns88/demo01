//VD 17.1: Nhap mot mang cac ky tu (ket thuc khi nhap 0), ghi mang do ra tep kytu.txt, 
// doc cac ky tu tu tep do va hien thi len man hinh
#include <stdio.h>
void main()
{
	FILE *fp;
	char ch;
	fp=fopen("kytu.txt","w");
	if (fp==NULL)
	{
		printf("Loi mo tep");
		exit(1);
	}
	do 
	{
		fflush(stdin);
		printf("Nhap mot ky tu:");scanf("%c",&ch);
		if (ch!='0') fputc(ch,fp);
	}
	while (ch!='0');
	fclose(fp);
//Doc du lieu tu tep da ghi
	fp=fopen("kytu.txt","r");
	printf("\nCac ky tu da nhap la:\n");
	do 
	{
		ch=fgetc(fp);
		printf("%c ",ch);
	} 
	while (ch!=EOF);
	fclose(fp);
}

