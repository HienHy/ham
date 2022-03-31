#include<stdio.h>
#include<math.h>
int kiemtrasnt(int x)
{
 if (x<=2)
    return 0;
for( int i=2;i<=x-1;i++)
    { 
 	if(x%i==0)
 	return 0;
	}
return 1;
}


int main(){
	int n;
	printf("nhap vao n = ");
	scanf("%d",&n);
	
	int kt=kiemtrasnt(n);
	if(kt==1)
	 printf("la so nguyen to");
	 else
	 printf("khong la so nguyen to");
	 }
