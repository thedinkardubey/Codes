#include<iostream>
int main(){
    // For printing the upper block
    for(int i = 0; i< 5; i++){
        for(int k = 0; k <= i; k++)
        {
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }

    // For printing the lower block
    for(int i = 0; i< 4; i++){
        for(int k = 0; k < 4-i; k++)
        {
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
}