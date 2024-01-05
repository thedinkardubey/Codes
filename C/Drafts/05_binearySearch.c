#include<stdio.h>
int binarySearch(int arr[], int size, int elementToSearch)
{
    int low, mid, high;
    low=0;
    high=size-1;
    while(low<high)
    {
        mid=(low+high)/2;
        if(arr[mid]==elementToSearch)
        {
            return mid;
        }
        else if(arr[mid]<elementToSearch){
            low=mid+1;
        }
        else {
            high=mid-1;
        }
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,4,5,6,69,0};
    int size=sizeof(arr)/sizeof(int);
    int elementToSearch=62;
    int indexOfSearchedElement=binarySearch(arr,size,elementToSearch);
    if(indexOfSearchedElement!=-1)
    {
    printf("The element %d found at %d!", elementToSearch, indexOfSearchedElement);
    }
    else{
        printf("The element you entered is not present in the array!\n");
    }
    return 0;
}