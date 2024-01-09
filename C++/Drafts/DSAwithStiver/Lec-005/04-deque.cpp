#include<iostream>
#include<deque>
/**
 * Syntax:
 * std::deque<int> deque'sName;
*/
std::deque<int> bucketDeque;
void printDeque(std::deque<int> &bdq){
    std::cout<<"The Deque is: [ ";
    for(auto it=bdq.begin(); it!=bdq.end();it++){
        std::cout<<*(it)<<" ";
    }
    std::cout<<"]"<<std::endl;
}
void explainDeque(){
    bucketDeque.push_back(10);
    bucketDeque.push_front(11);
    bucketDeque.push_back(12);
    bucketDeque.emplace_back(8);
    bucketDeque.emplace_front(7);
    printDeque(bucketDeque);
    std::cout<<bucketDeque.back()<<std::endl;
    std::cout<<bucketDeque.front()<<std::endl;
}
int main(){
    system("clear");
    explainDeque();
    return 0;
}