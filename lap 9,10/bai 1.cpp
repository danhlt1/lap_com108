#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void tong2so(){
	int a,b;
	printf("nhap a:");
	scanf("%d",&a);
	printf("nhap b");
	scanf("%d",&b);
	printf("tong cua %d + %d = %d \n",a,b,a+b);
	
}
void giaiphuongtrinhbac2(){
	int a,b,c;
	printf("nhap a:");
	scanf("%d",&a);
	printf("nhap b:");
	scanf("%d",&b);
	printf("nhap c:");
	scanf("%d",&c);
	float delta = (float)b*b-4*a*c;
	if (delta <0){
		printf("phuong trinh vo nghiem!\n");		
	}
	else if (delta==0){
		printf("x1=x2= %2.f\n",(float)(-b) / (2*a));
	}
}
void menu(){
	int luachon;
	printf("------MENU-------\n");
	printf("1. nhap so nguyen in ra tong 2 so.\n");
	printf("2. giai phuong trinh bac 2,\n");
	printf("0. thoat.\n");
	scanf("%d",&luachon);
	printf("---------------\n");
	switch (luachon){
		case 1:
			tong2so();
			break;
		case 2:
			giaiphuongtrinhbac2();
			break;
		case 0:
			exit(0);
		default:
			printf("chi chon 1 trong 2 phuong trinh o tren:");
	}
}
int main(){
	while (1){
		menu();
	}
}

