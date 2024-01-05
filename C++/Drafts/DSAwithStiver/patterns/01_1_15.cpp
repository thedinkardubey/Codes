#include<iostream>
int main(){
    for(char i = 'E'; i>= 'A'; i--){
        for(char j = 'A'; j <= i; j++)
        {
            std::cout<<j;
        }
        std::cout<<std::endl;
    }
}