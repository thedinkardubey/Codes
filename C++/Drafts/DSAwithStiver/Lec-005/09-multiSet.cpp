#include<iostream>
#include<set>
/**
 * Syntax:
 * std::multiset<dataType> multiset'sName;
*/
std::multiset<int> multiSet1;
void explainMultiSet(){
    multiSet1.emplace(1);
    multiSet1.emplace(1);
    multiSet1.emplace(5);
    multiSet1.emplace(5);
    multiSet1.emplace(6);
    // multiSet1.erase(5); // deletes all the instances of 5
    /*-----To solve this issue we will use iterator to get the element's address-----*/
    auto it = multiSet1.find(5); 
    multiSet1.erase(multiSet1.find(1),multiSet1.find(5));
    int elementCount = multiSet1.count(1); 
    std::cout<<"The count of 1 is: "<<elementCount<<std::endl;
    int elementCount3 = multiSet1.count(5); 
    std::cout<<"The count of 5 is: "<<elementCount3<<std::endl;
    int elementCount4 = multiSet1.count(6); 
    std::cout<<"The count of 6 is: "<<elementCount4<<std::endl;

}
int main(){
    system("clear");
    explainMultiSet();
    return 0;
}