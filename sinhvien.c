//sinhvien.c
#include <stdio.h>
#include "sinhvien.h"

void nhapSV(SV *d)
{
	fflush(stdin);
	printf("Nhap ma sinh vien:");gets(d->masv);
	printf("Nhap ho ten sinh vien:");gets(d->hoten);
	inputDate(&d->ns);
	do{
		printf("Nhap gioi tinh (0-nu/1-nam/2-khac):");scanf("%d",&d->gt);
		if (d->gt<0||d->gt>2) printf("Gia tri khong hop le, hay nhap lai\n");
	}while (d->gt<0||d->gt>2);
	
	fflush(stdin);
	printf("Nhap noi sinh: ");gets(d->noisinh);
	printf("Nhap lop: ");gets(d->lop);
	printf("\n Nhap diem Toan:");scanf("%f",&d->Diemtoan);
    printf("\n Nhap diem Van:");scanf("%f",&d->Diemvan);
    printf("\n Nhap diem A:");scanf("%f",&d->Diemanh);
}

void inSV(SV d)
{
	printf("\nMa sinh vien: %s", d.masv);
	printf("\nHo ten: %s", d.hoten);
	printf("\nGioi tinh: %s",(d.gt==0?"Nu":(d.gt==1?"Nam":(d.gt==2?"Khac":""))));
	printf("\nNgay sinh:"); outputDate(d.ns);
	printf("\nNoi sinh: %s", d.noisinh);
	printf("\nLop: %s", d.lop);	
	printf("\nDiem Toan: %f", d.Diemtoan);
	printf("\nDiem Van: %f", d.Diemvan);
	printf("\nDiem Anh: %f", d.Diemanh);

}
void nhapDSSV(SV *d, int *n)
{
	int i;
	printf("\n So sinh vien muon nhap:");scanf("%d",n);
	for(i=0;i<*n;i++)
	{
		printf("\n Sinh vien thu %d:\n",i+1);
		nhapSV(&d[i]);
	}
	printf("\n Nhap du lieu thanh cong, nhan enter de quay ve menu chinh...");
}
void inDSSV(SV *d, int n)
{
	int i;
	printf("\n Cac sinh vien da nhap: ");
	for (i=0;i<n;i++){
		printf("\n Sinh vien thu %d:\n",i+1);
		inSV(d[i]);
	}
}
int timSV(SV *d, int n)
{
	char findText[15];
	int i, result = 0;
	fflush(stdin);
	printf("\n Nhap ma sinh vien muon tim: ");gets(findText);
	for (i=0; i<n; i++)
		if(strcmp(d[i].masv, findText)==0)
		{
			result++;
			inSV(d[i]);
		}
	printf("\n Co %d sinh vien tim thay", result);
	return result;
}

