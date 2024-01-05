#include<iostream>
int main(){
    for(int i = 0; i< 5; i++){
        for(int j = 0; j < 5-i; j++)
        {
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
}