#include<stdio.h>
int linearSearch(int arr[], int size, int elementToSearch)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]==elementToSearch)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[7]={23,34,28,69,88,99,10};
    int size=sizeof(arr)/sizeof(int);
    int elementToSearch=99;
    int indexOfSearchedElement=linearSearch(arr, size, elementToSearch);
    printf("Element %d found at %d!\n", elementToSearch, indexOfSearchedElement);
    return 0;
}