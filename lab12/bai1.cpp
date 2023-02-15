#include<stdio.h>
int main (){
	int a, b;
	printf("Nhap so nguyen a: ");
	scanf("%d",&a) ;
	printf("Nhap so nguyen b: ");
	scanf("%d",&b);
	printf("Tong cua 2 so nguyen la: %d \n",a+b);
	printf("Hieu cua 2 so nguyen la: %d \n",a-b);
	printf("Tich cua 2 so nguyen la: %d \n",a*b);
	printf("Thuong cua 2 so nguyen la: %.1f",(float)a/b);
} 
