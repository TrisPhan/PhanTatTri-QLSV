#include <stdio.h>
#include <stdlib.h>
#include "sinhvien.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

    int chon, n;
    SV ds[100];
    do{
    	system("cls");
    	printf("\n						-----Menu-----						\n");
    	printf("\n				1. Nhap thong tin hoc vien					\n");
		printf("\n				2. Hien thi thong tin hoc vien				\n");
    	printf("\n 				3. Tim thong tin hoc vien theo ma hoc vien	\n");
    	printf("\n 				0. Thoat									\n");
    	printf("\n						--------------						\n");
    	printf("\n *Ban hay chon mot cong viec: ");scanf("%d",&chon);
    	switch(chon)
    	{
    		case 1:
    			system("cls");
    			printf("\n 1. Nhap thong tin hoc vien");
    			nhapDSSV(ds,&n);
    			getch();
    			break;
    		case 2:
    			system("cls");
    			printf("\n 2. Hien thi thong tin hoc vien");
    			inDSSV(ds,n);
    			getch();
    			break;
    		case 3:
    			system("cls");
    			printf("\n 3. Tim thong tin hoc vien theo ma hoc vien");
    			timSV(ds,n);
    			getch();
    			break;
		}

	}while(chon!=0);

	return 0;
}
	

