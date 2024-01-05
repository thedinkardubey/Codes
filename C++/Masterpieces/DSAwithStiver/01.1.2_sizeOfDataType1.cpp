#include<iostream>
#include<string>
int dataTypes(std::string type){
    if(type=="int"){
        return 4;
    }
    else if(type=="Long"){
        return 8;
    }
    else if(type=="Float"){
        return 4;
    }
    else if(type=="Double"){
        return 8; 
    }
    else if(type=="Char"){
        return 1;
    }
    else{
        return -1;
    }
}
int main(){
    std::string type;
    //std::cout<<"Enter the type of data: "<<std::endl;
    std::cin>>type;
    dataTypes(type);
    return 0;
}
