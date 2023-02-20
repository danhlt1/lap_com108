#include<stdio.h>
int main(){
	int a,b,c;
	printf("nhap diem toan:");
	scanf("%d",&a);
	printf("nhap diem hoa:");
	scanf("%d",&b);
	printf("nhap diem ly:");
	scanf("%d",&c);
	switch ((a+b+c)/3){
		case 10:
		case 9:
			printf("loai A");
		break;
		case 8:
		case 7:
			printf("loai B");
		case 6:
		case 5:
			printf("loai C");
		break;
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			printf("loai D");
			break;
			
	}
}
