#include<iostream>
int main(){
    for(char i = 'A'; i<= 'E'; i++){
        for(char j = 'A'; j <= i; j++)
        {
            std::cout<<i;
        }
        std::cout<<std::endl;
    }
}