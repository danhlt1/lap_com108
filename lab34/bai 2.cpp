#include<stdio.h>
int main(){
	float a,b,c;
	char x[30];
	printf("nhap ten hoc sinh:");
	gets(x);
	printf("nhap vao diem toan:");
	scanf("%f",&a);
	printf("nhap vao diem ly:");
	scanf("%f",&b);
	printf("nhap vao diem hoa:");
	scanf("%f",&c);
	if((a+b+c)/3>=9){
		printf("xep loai A");
	}
	else if((a+b+c)/3>=7 && (a+b+c)/3<9){
		printf("xep loai B");
		
	}
	else if ((a+b+c)/3>=5 && (a+b+c)/3<7){
		printf("xep loai C");
	}
	else {
		printf("xep loai D");
	}
	
	
	
}
