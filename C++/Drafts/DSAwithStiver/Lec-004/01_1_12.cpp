#include<bits/stdc++.h>
int main()
{
    for(int i=1; i<=4; i++){
        // Numbers
        for(int j=1; j<=i; j++){
            std::cout<<j;
        }
        // Spaces
        for(int k=0; k<(4-i)*2;k++){
            std::cout<<" ";
        }
        // Numbers
        for(int j=i; j>=1; j--){
            std::cout<<j;
        }
        std::cout<<std::endl;
    }
    return 0;
}