#include<stdio.h>
void doiso(int *num1,int *num2){
	int temp=*num1;
	*num1=*num2;
	*num2=temp;
	*num1+*num2;
	
	
}
int main(){	
	int so = 50;
	int sum;
	int chem = 20;	
	doiso( &so, &chem);
	sum=so+chem;
	printf("tong la %d\n",sum);
	
	
	
	printf("%d \t %d",so,chem);
	return 0;
}
