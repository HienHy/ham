#include<stdio.h>
square(int x)
 {
 int j;
 j=x * x;
 return(j);
 }
 int tich(int k,int g,int h)
{
 return(k*g*h);
}
main()
{
	int sum2;
	int i;
	int b;
	int c=5;
	int a1=10;
	int b1=15;
	for(i=1;i<=10;i++){
		printf("\nSquare of %d is %d",i,square(i));
		}
      
    for(b=1;b<=50;b++){
    	printf("\nSquare of %d is %d",b,square(b));
    	}
    
	printf("\nSum = %d",tich(a1,b1,c));
	printf("\nSum = %d",tich(i,b,c));
   
}
