#include <iostream>
#include <cstdlib>

const int MAX=100;

class queue{
    private:
    int arr[MAX];
    int front;
    int back;
    public:
    queue(){
        front = -1;
        back = -1;
    }
    void push(int element){
        if(back==MAX-1){
            std::cout<<"queue overflow!!!"<<std::endl;
            return;
        }
        else
        {
            back++;
            arr[back]=element;
        }
        if(front==-1){
            front++;
        }
    }

    void pop(){
        if(front==-1|| front>back){
            std::cout<<"No elements to pop!!!"<<std::endl;
            return;
        }
        front++;
   
    }


    int Top(){
        if(front==-1|| front>back){
            std::cout<<"No elements in stack!!!"<<std::endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }
 

    bool isempty(){
        if(front==-1|| front>back){
            std::cout<<"No elements in stack!!!"<<std::endl;
        }
        return -1;
    }


};

int main()
{
    system("clear");

    queue st;
    st.push(1);
    st.push(2);
    st.push(3);
    std::cout<<"The frontmost element of the queue is: "<<st.Top()<<std::endl;
    st.pop();
    std::cout<<"The frontmost element of the queue is: "<<st.Top()<<std::endl;
    st.pop();
    st.pop();
    st.pop();
    std::cout<<"The queue is: "<<st.isempty()<<std::endl;
    std::cout<<"The frontmost element of the queue is: "<<st.Top()<<std::endl;
    


    return 0;
}