#include<iostream>
#include<list>
/**
 * Syntax:
 * std::list<int> list'sName;
*/
std::list<int> bucketList;
void printList(std::list<int> &bL){
    std::cout<<"The List is: [ ";
    for(auto it=bL.begin(); it!=bL.end();it++){
        std::cout<<*(it)<<" ";
    }
    std::cout<<"]"<<std::endl;
}
void explainLists(){
    bucketList.push_back(10);
    bucketList.push_front(11);
    bucketList.push_back(12);
    bucketList.emplace_back(8);
    bucketList.emplace_front(7);
    printList(bucketList);
    std::cout<<"The back of the List: "<<bucketList.back()<<std::endl;
    std::cout<<"The front of the List: "<<bucketList.front()<<std::endl;
    std::cout<<"The size of the List: "<<bucketList.size()<<std::endl;
}
int main(){
    system("clear");
    explainLists();
    return 0;
}