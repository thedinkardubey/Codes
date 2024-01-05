#include <iostream>
#include <cstdlib>

int dataTypes(std::string type){
    if(type=="int"){
        std::cout<<"The size of int is: "<<sizeof(int)<<" bytes"<<std::endl;
    }
    else if(type=="long"){
        std::cout<<"The size of long is: "<<sizeof(long)<<" bytes"<<std::endl;
    }
    else if(type=="float"){
        std::cout<<"The size of float is: "<<sizeof(float)<<" bytes"<<std::endl;
    }
    else if(type=="double"){
        std::cout<<"The size of double is: "<<sizeof(double)<<" bytes"<<std::endl;
    }
    else if(type=="char"){
        std::cout<<"The size of char is: "<<sizeof(char)<<" bytes"<<std::endl;
    }
    return 0;
}

int main() {
    system("clear");

    std::string type;
    std::cout << "Enter the data type whose size you want to print: ";
    std::cin >> type;
    dataTypes(type);

    return 0;
}