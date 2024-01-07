#include<iostream>
int main()
{
    for(int i=0;i<=6; i++){
        for(int j=0; j<=3; j++){
            if(i%2!=0){
                std::cout<<"";
                break;
            }
            if (i == 0 || i == 6 || j == 0 || j == 3) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout<<std::endl;
    }
    return 0;
}