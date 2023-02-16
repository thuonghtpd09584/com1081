#include<stdio.h> 
int main(){
    for(int start=1; start<=100; start++)
	{
		printf("%02d ",start); 
		if(start % 10 == 0) 
		{
		printf("\n"); 
		 } 
	} 
	return 0;	 
} 
