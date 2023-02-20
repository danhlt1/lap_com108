#include<stdio.h>
int main(){
	int a;
	const float PI = 3.14;
	printf("nhap vao so a:");
	scanf("%d",&a);
	printf("dien tich hinh tron la :%.2f \n",(float)a*a*PI/4);
	printf("dien tich hinh  vuong la:%d \n",a*a);
	printf("dien tich tam giac can 1/4 hinh vuong la:%d \n",a*a*1/2);
}
