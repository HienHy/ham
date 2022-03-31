#include<stdio.h>
#include<math.h>

float ga(float a, float b,float c)
{ 
  if(a+b>c && a+c>b && b+c>a){
	float s,p;
	p=(a+b+c)/2;
	s = (sqrt(p*(p-a)*(p-b)*(p-c)));
	return(s);
	}
	else
	  printf("Tam giac khong hop le\n");
}
float main()
{
	float x,y,z;
	printf("nhap vao 3 canh x,y,z\t\n");
	scanf("%f%f%f",&x,&y,&z);
	printf("S = %.2f",ga(x,y,z));
}

