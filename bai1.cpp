#include<stdio.h>
#icnlude<math.h>
 //void menu(){
//	printf("menu: \n");
//	printf("1.Tong hai so nguyen \n");
//	printf("2.Tinh can ban 2 \n");
/	printf("3.Thoat khoi chung trinh \n "); 
} 
void tong2so(){
	int a, b;
	printf("Nhap a : ");
	scanf("%d",&a);
	printf("Nhap b : ");
	sacnf("%d",&b) ;
	printf("Tong 2 so nguyen la: %d",a+b); 
} 
void canbac2(){
	float a,b,c;
	printf("Nhap a: ");
	scanf("%f",&a);
	printf("Nhap b: ");
	scanf("%f",&b); 
	printf("Nhap c: ");
	scanf("%f",&c); 
	float delta =b*b-(4*a*c) ;
	if(delta<0){
		printf("phuong trinh vo nghiem "); 
	} 
	else if(delta==0){
		float x=-b/(2*a); 
		printf("phuong trinh co nghiem kep x=%.1f \n",x); 
	} 
	else{
		float x1 = (-b=sqrt(delta))/(2*c) 
	} 
} 
