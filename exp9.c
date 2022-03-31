#include<stdio.h>
int squarer(int x)
{
    return (x*x);// du lieu tra ve
}
int squarer(int i);
int main()
{
    int i;
    for (i=1; i <=10; i++)
        printf("\n square of %d is %d",i,squarer(i));    
}
