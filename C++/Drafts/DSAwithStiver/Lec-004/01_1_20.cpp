#include<iostream>
int main(){
    // For printing the upper block
    for(int i = 0; i<= 4; i++){
        for(int k = 0; k <= i; k++)
        {
            std::cout<<"*";
        }

        for(int k = i; k < 4; k++)
        {
            std::cout<<" ";
        }
       for (int j = 0; j <= 4 - i - 1; j++) {
            std::cout << " ";
        }
        for (int k = 0; k <= i; k++) {
            std::cout << "*";
        }
        std::cout<<std::endl;
    }




    // For printing the lower block
    for(int i = 0; i< 4; i++){
        for(int k = 0; k < 4-i; k++)
        {
            std::cout<<"*";
        }

            for(int j = 0; j <= 2*i+1; j++)
        {
            std::cout<<" ";
        }
            for (int j = 0; j <= 4 - i - 1; j++) {
            std::cout << "*";
        }
       

        std::cout<<std::endl;
    }
}
