//VD16.1: Tao struct sinh_vien, nhap va in thong tin 1 ban sinh vien
#include <stdio.h>
struct sinh_vien
{
	char masv[15];
	char hoten[50];
	int gioitinh;
	char lop[10];
	float dtb;
};
void main()
{
	struct sinh_vien  sv1;
	printf("\nNhap thong tin cua sinh vien:");
	printf("\nNhap ma sinh vien:");gets(sv1.masv);
	printf("\nNhap ho ten:");gets(sv1.hoten);
	printf("\nNhap gioi tinh:");scanf("%d",&sv1.gioitinh);
	fflush(stdin);
	printf("\nNhap lop:");gets(sv1.lop);
	printf("\nNhap diem trung binh:");scanf("%f",&sv1.dtb);
	
	printf("\nThong tin cua sinh vien vua nhap la:");
	printf("\nMa sinh vien: %s",sv1.masv);
	printf("\nHo ten: %s",sv1.hoten);
	printf("\nGioi tinh: %d",sv1.gioitinh);
	printf("\nLop: %s",sv1.lop);
	printf("\nDiem trung binh: %f",sv1.dtb);
}
