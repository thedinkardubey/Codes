#include<iostream>
int main(){
    for(int i = 0; i< 5; i++){
        for(int j = 0; j <= 4-i; j++)
        {
            std::cout<<"*";
        }
        for(int k = 0; k < i*2; k++)
        {
            std::cout<<" ";
        }
        for(int j = 4-i ; j >= 0; j--)
        {
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }

    for(int i = 1; i<= 5; i++){
        for(int j = 0; j < i; j++)
        {
            std::cout<<"*";
        }
        for(int k = 0; k <= 9-(i*2); k++)
        {
            std::cout<<" ";
        }
        for(int j = 0 ; j < i; j++)
        {
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
}