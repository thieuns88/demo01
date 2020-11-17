//Bai 15.2: Dem so tu cua mot xau
#include <stdio.h>
int demsotu(char *s)
{
	int dem=0,i;
	if (s[0]!=' ') dem=1;
	for (i=0;s[i]!='\0';i++)
		if (s[i]==' '&&s[i+1]!=' '&&s[i+1]!='\0') dem++;
	return dem;
}
void main()
{
	char str[100];
	printf("\nNhap vao mot xau:");gets(str);
	printf("\nSo tu cua xau la %d",demsotu(str));
}
