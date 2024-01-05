#include <iostream>
#include <cstdlib>

class A{
    public:
    void func(){
        std::cout<<"Hola"<<std::endl;
    }
};

class B{
    public:
    void func(){
        std::cout<<"Hola"<<std::endl;
    }
};

class C: public A ,public B{
    
};



int main()
{
    system("clear");
    C c1;
    // c1.func(); // Gives error because we have multiple function of same name inherited from class A and B so which to run.
    c1.A::func();
    c1.B::func();

    return 0;
}