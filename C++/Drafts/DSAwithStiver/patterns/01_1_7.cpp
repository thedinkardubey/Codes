#include<iostream>
int main(){
    for(int i = 0; i< 5; i++){
        for(int j = 0; j < 5-i; j++)
        {
            std::cout<<" ";
        }
        for(int k = 0; k < i*2+1; k++)
        {
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
    return 0;
}