#include<stdio.h>
void printArr(int* arr, int size)
{
    printf("["); 
    for(int i=0; i<size;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}
void insertionSort(int* arr, int size)
{
    int current=0;
    for(int i=1; i<size;i++)
    {
        current=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>current)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
}
int main()
{
    int arr[]={3,4,2,9,7,5,8};
    int size=sizeof(arr)/sizeof(int);
    printf("Array before Sorting:\n");
    printArr(arr,size);
    insertionSort(arr,size);
    printf("Array after Sorting:\n");
    printArr(arr,size);
    return 0;
}