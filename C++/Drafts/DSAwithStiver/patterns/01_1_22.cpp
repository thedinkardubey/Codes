#include<iostream>
int main(){
    for (int i = 0; i <= 6; i++)
    {
        for (int j = 0; j <= 6; j++)
        {
            if(j==0 || j==6 ||i==0||i==6)
            {
                std::cout<<"4";
            }
            else if(i==1 && 1<=j<=5 || i==5 && 1<=j<=5)
            {
                std::cout<<"3";
            }
            else if(j==1 && 1<=i<=5 || j==5 && 1<=i<=5)
            {
                std::cout<<"3";
            }
            else if(i==2 && 2<=j<=4 || i==4 && 2<=j<=4)
            {
                std::cout<<"2";
            }
            else if(j==2 && 2<=i<=4 || j==4 && 2<=i<=4)
            {
                std::cout<<"2";
            }
            else if(i==3 && j==3){
                std::cout<<"1";
            }
        }
        std::cout<<std::endl;
    }
    
    return 0;
}