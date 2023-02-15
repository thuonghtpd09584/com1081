#include<stdio.h>
int main (){
	int a;
	const float x=3.14;
	const int y=4; 
	printf("Nhap so a: ");
	scanf("%d",&a) ;
	printf("Dien tich hinh tron la: %.1f \n",(float)(x*(a*a)));
	printf("Dien tich hinh vuong la: %.1f \n",(float)a*a);
	printf("Dien tich tam giac can la: %.1f \n",(float)(a*a)/y);
} 
