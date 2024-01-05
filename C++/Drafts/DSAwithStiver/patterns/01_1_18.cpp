#include<iostream>
int main(){
    for(char i = 'E'; i>= 'A'; i--){
        for(char j = i; j <= 'E'; j++)
        {
            std::cout<<j;
        }
        std::cout<<std::endl;
    }
    return 0;
}