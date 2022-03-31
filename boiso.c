#include<stdio.h>
#include<math.h>
int boiso(int a)
{
	
	if(a%50==0)
	   return 1;
	else
	return 0;
}
int main(){
	int k;
    int B[50];
	int n;
	printf("nhap so luong so can kiem tra ");
	scanf("%d",&n);
	for(k=0;k<n;k++)
	    {
		scanf("%d",&B[k]);
		}
	for(k=0;k<n;k++)
	     {
        int kt=boiso(B[k]);
          if(kt==1)
		    printf("%d la boi so\n",B[k]);
     	if(kt==0)
		printf("%d khong la boi so\n",B[k]);
		}
}
