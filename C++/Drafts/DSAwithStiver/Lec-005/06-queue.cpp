#include<iostream>
#include<queue>
/**
 * Syntax:
 * std::queue<dataType> queue'sName;
*/
std::queue<int> myQueue;
void printQueue(std::queue<int> &mS){
    std::queue<int> tempQueue =mS;
    std::cout<<"The queue is: [ ";
    while(!tempQueue.empty()){
        std::cout<<" "<<tempQueue.front();
        tempQueue.pop();
    }
    std::cout<<" ]"<<std::endl;
}
void explainQueue(){
    printQueue(myQueue);
    myQueue.push(1);
    myQueue.push(3);
    myQueue.push(4);
    printQueue(myQueue);
    myQueue.emplace(5);
    printQueue(myQueue);
    std::cout<<"The size of the queue is: "<<myQueue.size()<<std::endl;
    std::cout<<"The front of the queue is: "<<myQueue.front()<<std::endl;
    std::queue<int> myQueue2;
    printQueue(myQueue2);
    myQueue2.push(3);
    myQueue2.push(4);
    printQueue(myQueue2);
    myQueue2.swap(myQueue);
    std::cout<<"The myQueue2 is: "<<std::endl;
    printQueue(myQueue2);
    std::cout<<"The myQueue is: "<<std::endl;
    printQueue(myQueue);
    myQueue.swap(myQueue2);
    std::cout<<"The myQueue is: "<<std::endl;
    printQueue(myQueue);
    std::cout<<myQueue.empty()<<std::endl;
    myQueue=std::queue<int> (); // to clear the queue at once. You could also declare a new queue and swap the it with the queue to be cleared.
    printQueue(myQueue);
}
int main(){
    system("clear");
    explainQueue();
    return 0;
}