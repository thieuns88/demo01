// VD 16.2: Nhap vao mot danh sach 5 sinh vien, hien thi danh sach da nhap
#include <stdio.h>
typedef struct 
{
	int ngay, thang, nam;
} date;
typedef struct 
{
	char masv[15];
	char hoten[50];
	date ngaysinh;
	int gioitinh;
	char lop[10];	
	float d1,d2,dtb;
} sinh_vien;
void main()
{
	sinh_vien  sv[5];
	int i,n=2;
	for (i=0;i<n;i++)
	{
		fflush(stdin);
		printf("\nNhap thong tin cua sinh vien %d:",i+1);
		printf("\nNhap ma sinh vien:");gets(sv[i].masv);
		printf("\nNhap ho ten:");gets(sv[i].hoten);
		printf("\nNhap ngay, thang, nam sinh:");
		scanf("%d%d%d",&sv[i].ngaysinh.ngay,&sv[i].ngaysinh.thang,&sv[i].ngaysinh.nam);
		printf("\nNhap gioi tinh:");scanf("%d",&sv[i].gioitinh);
		fflush(stdin);
		printf("\nNhap lop:");gets(sv[i].lop);
		printf("\nNhap diem mon 1:");scanf("%f",&sv[i].d1);
		printf("\nNhap diem mon 2:");scanf("%f",&sv[i].d2);
		sv[i].dtb=(2*sv[i].d1+3*sv[i].d2)/5;
	}
	printf("\nThong tin cua sinh vien vua nhap la:");
	for (i=0;i<n;i++)
	{
		printf("\nMa sinh vien: %s",sv[i].masv);
		printf("\nHo ten: %s",sv[i].hoten);
		printf("\nNgay sinh: %d/%d/%d",sv[i].ngaysinh.ngay,sv[i].ngaysinh.thang,sv[i].ngaysinh.nam);
		printf("\nGioi tinh: %d",sv[i].gioitinh);
		printf("\nLop: %s",sv[i].lop);
		printf("\nDiem mon 1: %f",sv[i].d1);
		printf("\nDiem mon 2: %f",sv[i].d2);
		printf("\nDiem trung binh: %f",sv[i].dtb);
	}
	
}
