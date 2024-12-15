#include<stdio.h>
int main(){
	int so=5;
	int *soPrt=&so;
	printf("dia chi cua bien la %d\n",&so);
	printf("gia tri cua bien la :%d\n ",so);
    printf("dia chi cua bien la %d\n",&soPrt);
	printf("gia tri cua bien la :%d \n",*soPrt);
	
	
	
	
	return 0;
}
