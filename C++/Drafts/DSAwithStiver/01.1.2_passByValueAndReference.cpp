#include<bits/stdc++.h>
void passByValue(std::string name){
    name[0]='T';
    std::cout<<name<<std::endl;
}
void passByReference(std::string& name){
    name[0]='T';
    std::cout<<name<<std::endl;
}
int main(){
    std::string name="Raj";
    std::cout<<name<<std::endl;
    passByValue(name);
    std::cout<<"Printing after pass by value!!!"<<std::endl<<name<<std::endl; // It returns Raj because all operation done prier is on copy of the name not on the actual name.
    passByReference(name);
    std::cout<<"Printing after pass by reference!!!"<<std::endl<<name<<std::endl;
    return 0;
}