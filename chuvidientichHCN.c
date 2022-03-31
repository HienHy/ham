#include<stdio.h>
#include<math.h>

float dientich(float a,float b){
	return(a+b)*2;
}
float chuvi(float a,float b){
	return a*b;
}

float main(){
	float a,b;
	int c;
	int i;
	for(i=0;;i++)
	{	
	printf("Nhap chieu dai,chieu rong a,b lan luot la := \n");
	scanf("%f%f",&a,&b);
	printf("\tNhan 1 de tinh dien tich\n");
	printf("\tNhan 2 de tinh chu vi\n");
	fflush(stdin);
	scanf("%d",&c);
	switch(c)
	  {
		case 1:
			printf("Dien tich = %.2f\n",dientich(a,b));
			break;
		case 2:
			printf("Chu vi = %.2f\n",chuvi(a,b));
			break;
      }
	  printf("Nhan Ctrl + C de thoat khoi day :)\nNhap so de tiep tuc\n");
	}	
}
