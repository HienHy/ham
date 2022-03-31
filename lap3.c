#include<stdio.h>

int tong(int num1,int num2)
{
	return(num1+num2);
}

int hieu(int num1,int num2)
{
	return(num1-num2);
}

int tich(int num1,int num2)
{
	return(num1*num2);
}

int thuong(int num1,int num2)
{
	return(num1/num2);
}

int main(){
	int a,b;
	char luachon;
	printf("nhap so a = ");
	scanf("%d",&a);
	printf("nhap so b = ");
	scanf("%d",&b);
	printf("nhap lua chon cua ban");
	fflush(stdin);
	luachon=getchar();
	switch(luachon){
		case'+':
			printf("tong 2 so = %d",tong(a,b));
			break;
	}
}











