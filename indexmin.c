#include <stdio.h>
void indexMin(int arr[], int size)
{
    int i,min;
    for(i=0;i<size;i++)
    {
        arr[0] = min;
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }printf("Min value: %d",arr[i]);
}
int main() {
    int arr[10],i;

    for(i=0;i<10;i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    indexMin(arr,10);
    return 0;
}
