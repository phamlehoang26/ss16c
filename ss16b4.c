#include<stdio.h>
void goimang(int *arr,int length){
	for(int i=0;i<length;i++){
		printf("%d",*(arr+i));
	}
}




int main(){
	int arr[]={1,2,3,4,5};
	int length=sizeof(arr)/sizeof(arr[0]);
	goimang(arr,length);
	
	
	
	
	return 0;
}
