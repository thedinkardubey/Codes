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

void bubbleSort(int* arr, int size)
{
    int temp=0;
    for(int i=0;i<size-1;i++)
    {
        for(int j=0; j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void adaptiveBubbleSort(int *arr, int size)
{
    int temp=0;
    int isSorted=0;
    for(int i=0; i < size-1;i++)
    {
        isSorted=1;
        for(int j=0; j < size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                isSorted=0;
            }
           
        }
         if(isSorted==1)
            {
                return;
            }
    }
}

int main()
{
    int arr[]={1,2,3,4,5,69,17,8,9,10};
    int size = 10;
    printf("Array before Sorting:\n");
    printArr(arr, size);

    bubbleSort(arr, size);
    //adaptiveBubbleSort(arr, size);
    printf("Array after Sorting:\n");
    printArr(arr, size);
    return 0;
}