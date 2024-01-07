#include <iostream>
int main()
{
    int k=1;
    while(k<=15){
    for (int i = 1; i <= 5; i++)
    {for (int j = 0; j < i; j++)
            {
                std::cout << k<<" ";
                k++;
            }
        std::cout << std::endl;
    }}
}