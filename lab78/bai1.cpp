#include<stdio.h> 
int main(){
	int start;
	for(start=1; start<=100; start++){
		printf("%02d",&start);
		 if(start%10==0){
		 	printf("\n"); 
		 } 
	} 
	return 0;	 
} 
