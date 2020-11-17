//Bai 15.1: Dem so lan xuat hien cua cac ky tu trong chuoi
#include <stdio.h>
int demMotKyTu(char *s, char ch)
{
	int dem=0,i;	
	for (i=0;s[i]!='\0';i++)
		if (s[i]==ch) dem++;
	return dem;
}
void demCacKyTu(char *s)
{
	int dem[128],i;
	for (i=0;i<128;i++) dem[i]=0;
	for (i=0;s[i]!=NULL;i++)	
		dem[s[i]]++;	
	for (i=0;i<128;i++)
		if (dem[i]>0)
			printf("\nKy tu %c co %d lan xuat hien",i,dem[i]);
}
void main()
{
	char str[100],ch;
	printf("\nNhap vao mot xau:");gets(str);
	printf("\nNhap vao mot ky tu:");scanf("%c",&ch);
	printf("\nSo lan xuat hien cua %c trong xau la %d",ch,demMotKyTu(str,ch));
	demCacKyTu(str);
}
