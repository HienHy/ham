#include<stdio.h>
int sum(int a,int b){
	return(a+b);
}
int sub(int a,int b){
	return(a-b);
}
int multi(int a,int b){
	return(a*b);
}
double div(int a,int b){
	if(b==0){
		return 0;}
	return (float)a/b;
}

int main(){
	int luachon;
	int d,f,i;
	printf("\tTINH TOAN\n\t===============\n");
	printf("\t1.Nhap so\n");
	printf("\t2.Tinh tong\n");
	printf("\t3.Tinh hieu\n");
	printf("\t4.Tinh tich\n");
	printf("\t5.Tinh thuong\n");
	printf("\t6.Thoat\n\t=================\n");
for(i=0;i<7,luachon<6;i++){
	printf("\tChon :");
	fflush(stdin);
    scanf("%d",&luachon);
switch(luachon)
	   {
	    case 1:
		   printf("nhap 2 so can tinh toan : \n");
		   scanf("%d%d",&d,&f);
		   break;
	    case 2:
		   printf("sum = %d\n",sum(d,f));
	       break;
	    case 3:
	       printf("sub = %d\n",sub(d,f));
		   break;
	    case 4:
		   printf("multi = %d\n",multi(d,f));
		   break;
	    case 5: 
		    if(f==0){
			   printf("khong hop le kiem tra so da nhap va vui long nhap lai\n");
			  }
		   	else 
	        	printf("div = %.1f\n",div(d,f));
		    break;
		case 6:
			printf("\tSee you again");
			break;
	   }
	}	      
}
