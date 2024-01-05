#include <iostream>

class AddingReverse {
public:
    int value;
    //int b;
    AddingReverse(int a){
        this->value=a;
    }
 
    AddingReverse operator + ( AddingReverse& other) {
        AddingReverse overloaderObject(this->value*other.value); //this refers to the left operand, which is a1. Therefore, this->value is 388 (the value of a1).  other refers to the right operand, which is a2. Therefore, other.value is 69 (the value of a2).
        return overloaderObject; // + this->b + other.b;
    }
};

int main() {
    AddingReverse a1(6), a2(2);

    // Overloaded + operator
    AddingReverse a3 = a1+a2;

    // Displaying the result
    std::cout << "Result: a = " << a3.value<<std::endl; //<< ", b = " << result.b << std::endl;

    return 0;
}
