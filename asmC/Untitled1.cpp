#include<stdio.h> 
#include <math.h>
// thu vien math.h de chay lenh sqrt()
int main()
{
	float x;
	int a ;
	printf("Nhap x:");
	scanf("%f",&x);
	if(x == (int)x)
	{
		printf("x la so nguyen\n") ;
	 } 
	 else{
	    printf("x khong phai la so nguyen\n") ;
	 	printf("x khong phai la so nguyen to\n") ;
	 	printf("x khong phai la so chinh phuong\n") ;
	 	return 0; 
	 } 
	 int y=x ;
	 if(y==0)
	 {
	 printf("x khong phai la so nguyen to\n") ;
	  } 
	else if(y==1)
	{
		printf("x khong phai la so nguyen to\n") ;
	 } 
	 else{
	 	for(int i=2;i<=sqrt(y);i++){
	 		if(y%i==0){
	 			a++ ;
			 } 
		 }
		 if(a==0){
		 	printf("x la so nguyen to\n") ;	
		 }
		 else{
		 		printf("x khong phai la so nguyen to\n") ;
		 } 
	 }
	 int canbac = sqrt(y);
	 if(y==0)
	 {
	 printf("x la so chinh phuong\n") ;	
	 return 0; 
	  } 
	 if(canbac*canbac==y){
	 		printf("x la so chinh phuong\n") ;	
	 }
	 else{
	 	printf("x khong phai la so chinh phuong\n") ;
	 } 
 } 
