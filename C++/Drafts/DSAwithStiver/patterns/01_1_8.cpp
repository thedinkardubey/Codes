#include<iostream>
int main(){
    for(int i = 0; i< 5; i++){
        for(int j = 0; j < i; j++)
        {
            std::cout<<" ";
        }
        for(int k = 0; k < 10-(i*2+1); k++)
        {
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
}