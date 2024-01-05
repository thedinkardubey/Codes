#include <iostream>
#include <cstdlib>

const int MAX=100;

class stack{
    private:
    int arr[MAX];
    int top;
    public:
    stack(){
        top = -1;
    }
    void push(int element){
        if(top==MAX-1){
            std::cout<<"Stack overflow!!!"<<std::endl;
            return;
        }
        else
        {
            top++;
            arr[top]=element;
        }
    }

    void pop(){
        if(top==-1){
            std::cout<<"No elements to pop!!!"<<std::endl;
            return;
        }
        top--;
    }

    int Top(){
        if(top==-1){
            std::cout<<"No elements in stack!!!"<<std::endl;
            return -1;
        }
        else{
            return arr[top];
        }
    }

    bool isempty(){
        return top==-1;
    }


};

int main()
{
    system("clear");

    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    std::cout<<"The topmost element of the stack is: "<<st.Top()<<std::endl;
    st.pop();
    std::cout<<"The topmost element of the stack is: "<<st.Top()<<std::endl;
    st.pop();
    st.pop();
    st.pop();
    std::cout<<"The stack is: "<<st.isempty()<<std::endl;
    std::cout<<"The topmost element of the stack is: "<<st.Top()<<std::endl;
    


    return 0;
}