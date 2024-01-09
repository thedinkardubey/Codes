#include <iostream>
#include <vector>
/**
 * Syntax:
 * vector<dataType> vector'sName;
 */
std::vector<int> marksOfFive; // Declaration
void iteratePrint(std::vector<int> &bL)
{
    std::cout << "The Vector is: "
              << "[ ";
    for (std::vector<int>::iterator position = bL.begin(); position != bL.end(); position++)
    {
        std::cout << (*position) << " ";
    }
    std::cout << "]" << std::endl;
}
void autoPrint(std::vector<int> &bL)
{
    std::cout << "The Vector is: [ ";
    for (auto it = bL.begin(); it != bL.end(); it++)
    {
        std::cout << *(it) << " ";
    }
    std::cout << "]" << std::endl;
}
void explainVectors()
{
    // std::cout<<"The value in marksOfFive at 0th index is: "<<marksOfFive[0]<<std::endl;
    marksOfFive.push_back(692); // Insertion
    marksOfFive.push_back(693);
    marksOfFive.push_back(694);
    marksOfFive.emplace_back(695); // Insertion
    marksOfFive.emplace_back(696);

    //----Accessing elements of the vector----

    //-----Using full iterator----------
    //    std::cout<<"< ";
    //    for(std::vector<int>::iterator position=marksOfFive.begin(); position!=marksOfFive.end();position++){
    //     std::cout<<(*position)<<" ";
    //    }
    //    /**
    //     * In above for loop we use iterator to access every element of the vector.
    //     * as we use to use for(int i=0;condition;i++), In vector we use iterator variable and data type is iterator
    //     * it will also run same if we use auto position.
    //    */
    //    std::cout<<">"<<std::endl;

    //----Using auto keyword------
    autoPrint(marksOfFive);

    std::cout << "Begin: " << *(marksOfFive.begin()) << std::endl;
    std::cout << "Rbegin: " << *(marksOfFive.rbegin()) << std::endl;
    std::cout << "Rbegin+1: " << *(marksOfFive.rbegin() + 1) << std::endl;
    std::cout << "End-1: " << *(marksOfFive.end() - 1) << std::endl;
    std::cout << "Rend-1: " << *(marksOfFive.rend() - 1) << std::endl;
    std::cout << "Rend-2: " << *(marksOfFive.rend() - 2) << std::endl;

    std::cout << "Back: " << (marksOfFive.back()) << std::endl;
    std::cout << "Front: " << (marksOfFive.front()) << std::endl;

    std::cout << "Using Index: " << marksOfFive[2] << std::endl;

    //----END of iterator----
    std::vector<std::pair<std::string, int>> customerProfile;
    customerProfile.emplace_back("Dinkar", 69000);
    std::cout << customerProfile[0].first << " " << customerProfile[0].second << std::endl; // whenever we use pair contents inside the pair is accessed one by one using .first and .second

    //----Deletion in Vectors----
    marksOfFive.erase(marksOfFive.begin());
    autoPrint(marksOfFive);
    marksOfFive.erase(marksOfFive.begin() + 1, marksOfFive.begin() + 3);
    //----Printing after Deletion to check----
    iteratePrint(marksOfFive);
    marksOfFive.clear();
    std::cout<<"The vector marksOfFive after clear operation"<<std::endl;
    autoPrint(marksOfFive);

    //----Insertion----

    std::vector<int> firstVector(2, 100);        // this means < 100 100 >
    std::vector<int> secondVector(2, 69);        // this mean < 6 69 >
    firstVector.insert(firstVector.begin(), 69); // this means < 69 100 100 >
    std::cout << "The vector firstVector is: ";
    autoPrint(secondVector);
    firstVector.insert(firstVector.begin(), 3, 69); // this means < 69 69 69 100 100 >
    std::cout << std::endl;
    std::cout << "The vector firstVector is: ";
    autoPrint(firstVector);
    //----Copy one vector to other----

    secondVector.insert(secondVector.begin(), firstVector.begin(), firstVector.end() - 2); // insert(position, from, to)
    std::cout << "The vector secondVector is after copying content from firstVector: ";
    autoPrint(secondVector);

    std::cout << "Size of secondVector is: " << secondVector.size() << std::endl;

    //----Swaping----
    secondVector.swap(firstVector);
    std::cout << "The vector firstVector is after swap: ";
    autoPrint(firstVector);
    std::cout << "The vector secondVector is after swap content from firstVector: ";
    autoPrint(secondVector);

    //----pop operation----
    firstVector.pop_back();
    std::cout << "The vector firstVector is after Pop operation: ";
    autoPrint(firstVector);
    std::cout << "Empty: " << firstVector.empty() << std::endl;
}
int main()
{
    system("clear");
    explainVectors();
    return 0;
}
