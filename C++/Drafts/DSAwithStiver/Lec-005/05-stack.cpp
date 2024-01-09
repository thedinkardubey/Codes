#include<iostream>
#include<stack>
/**
 * Syntax:
 * std::stack<dataType> stack'sName;
*/
std::stack<int> myStack;
void printStack(std::stack<int> &mS){
    std::stack<int> tempStack =mS;
    std::cout<<"The Stack is: [ ";
    while(!tempStack.empty()){
        std::cout<<" "<<tempStack.top();
        tempStack.pop();
    }
    std::cout<<" ]"<<std::endl;
}
void explainStack(){
    printStack(myStack);
    myStack.push(1);
    myStack.push(3);
    myStack.push(4);
    printStack(myStack);
    myStack.emplace(5);
    printStack(myStack);
    std::cout<<"The size of the stack is: "<<myStack.size()<<std::endl;
    std::cout<<"The top of the stack is: "<<myStack.top()<<std::endl;
    std::stack<int> myStack2;
    printStack(myStack2);
    myStack2.push(3);
    myStack2.push(4);
    printStack(myStack2);
    myStack2.swap(myStack);
    std::cout<<"The myStack2 is: "<<std::endl;
    printStack(myStack2);
    std::cout<<"The myStack is: "<<std::endl;
    printStack(myStack);
    myStack.swap(myStack2);
    std::cout<<"The myStack is: "<<std::endl;
    printStack(myStack);
    std::cout<<myStack.empty()<<std::endl;
    myStack=std::stack<int> (); // to clear the stack at once. You could also declare a new stack and swap the it with the stack to be cleared.
    printStack(myStack);
}
int main(){
    system("clear");
    explainStack();
    return 0;
}