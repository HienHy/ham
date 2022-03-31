#include<stdio.h>

int printfarray(int arr[],int size)
{
	int i;
	for(i=size-1;i>=0;i--){
		printf("Phan tu thu %d la %d\n",i+1,arr[i]);
	}
}
int main(){
	int i;
	int arr[5];
 printf("Nhap vao 5 phan tu trong mang\n");
for(i=0;i<5;i++){
	printf("Phan tu thu %d\t",i+1);
	scanf("%d",&arr[i]);
}
printfarray(arr,5);
}

		

