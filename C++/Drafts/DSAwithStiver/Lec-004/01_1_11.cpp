#include<iostream>
int main(){
    for(int i = 0; i< 5; i++){
        for(int j = 0; j <= i; j++)
        {
            if(i%2==1&&j%2==0 || i%2==0&&j%2==1){
                std::cout<<"0";
            }
            else{
                std::cout<<"1";
            }

        }
        std::cout<<std::endl;
    }
}