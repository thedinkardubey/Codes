#include <iostream>
#include <cstdlib>

class animal{
    public:
    void speaking(){
        std::cout<<"Speaking!!!"<<std::endl;
    }
};

class dog: public animal{
    public:
    void speaking(){
        std::cout<<"Barking!!!"<<std::endl;
    }
};

int main()
{
    system("clear");

    dog d1;
    d1.speaking();

    return 0;
}