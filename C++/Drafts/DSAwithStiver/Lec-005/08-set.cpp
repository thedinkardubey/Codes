#include <iostream>
#include <set>
/**
 * Syntax:
 * std::set<dataType> set'sName;
 */
std::set<int> setMarks;
void explainSet()
{
    setMarks.insert(3);  //{3}
    setMarks.emplace(4); //{3,4}
    setMarks.emplace(4); //{3,4}
    setMarks.emplace(5); //{3,4,5}
    /*-----To find element in the set-----*/
    auto it = setMarks.find(3); //  this gives 3 if presentin the set
    std::cout << *(it) << std::endl;
    auto its = setMarks.find(9);
    if (its != setMarks.end())
    {
        std::cout << *(its) << std::endl;
    }
    else
    {
        std::cout << "Element not found!!" << std::endl;
    }
    auto it4 = setMarks.find(4);
    // setMarks.erase(3); // erases element equal 3 from the set. Now set remains: {4,5}
    setMarks.erase(it,it4); // delets only 3 due to range.
    // setMarks.erase(it,its); // delets all element since it gives the first element and its will give the last+1 and since it its openbracket so delete till end()-1 th element.
    int elementCount = setMarks.count(4); // In case of set it will always give 1 eventhough I inserted 4 two times.
    std::cout<<"The count of 4 is: "<<elementCount<<std::endl;
    int elementCount3 = setMarks.count(3); // In case of set it will always give 1 eventhough I inserted 4 two times.
    std::cout<<"The count of 3 is: "<<elementCount3<<std::endl;
    int elementCount4 = setMarks.count(5); // In case of set it will always give 1 eventhough I inserted 4 two times.
    std::cout<<"The count of 5 is: "<<elementCount4<<std::endl;
    /*-----lower and upper bound-----*/
    auto itl=setMarks.lower_bound(4);
    auto itu=setMarks.upper_bound(3);
    std::cout<<"The lowerbound of 4 is: "<<*(itl)<<std::endl;
    std::cout<<"The upperbound of 3 is: "<<*(itu)<<std::endl;

}
int main()
{
    system("clear");
    explainSet();
    return 0;
}