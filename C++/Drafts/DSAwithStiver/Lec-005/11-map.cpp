#include<iostream>
#include<map>
/**
 * Syntax:
 * std::map<keyDatatype, valueDataType> map'sName;
*/
std::map<int,int> mapsName;
void explainMap(){
    mapsName.emplace(1,11);
    mapsName.emplace(2,12);
    mapsName.emplace(3,13);

    /*-----To get the value from key-----*/
    std::cout<<"The value of 1 key: "<<mapsName[1]<<std::endl;
    std::cout<<"The value of 2 key: "<<mapsName[2]<<std::endl;
    std::cout<<"The value of 3 key: "<<mapsName[3]<<std::endl;

    // we could also use for loop to achieve the same result.
    for(auto it:mapsName) // this makes it to iterate over the entire range of the map named mapsName.
    {
        std::cout<<"The value of "<<it.first<<"'s key is: "<<it.second<<std::endl;
    }
}
int main(){
    system("clear");
    explainMap();
    return 0;
}