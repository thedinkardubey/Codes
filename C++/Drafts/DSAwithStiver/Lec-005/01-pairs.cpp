#include<iostream>
#include<utility>
void explainPairs(){
    /**
     * Synatx:
     * std::pair<dataType, dataType> pair'sName = {value1, value2};
    */
    std::pair<int, int> pairName = {6,69};
    std::cout<<pairName.first<<" "<<pairName.second<<std::endl;
    std::pair<int,std::pair<int,int>> pairName2 = {3,{4, 1}};
    std::cout<<pairName2.first<<" " <<pairName2.second.first<<" "<<pairName2.second.second<<std::endl;
    std::pair<int,int> pairName3 = {56,0};
    std::cout<<pairName3.first<<" "<<pairName3.second<<std::endl;
    pairName3.second = pairName.second;
    std::cout<<pairName3.first<<" "<<pairName3.second<<std::endl;
    std::pair<int, std::pair<int,int>> pairName4 = {1,{0,0}};
    std::cout<<pairName4.first<<" "<<pairName4.second.first<<" "<<pairName4.second.second<<std::endl;
    pairName4.second = pairName;
    std::cout<<pairName4.first<<" "<<pairName4.second.first<<" "<<pairName4.second.second<<std::endl;
    std::pair<int, int> pairName5[] = {{1,2}, {2,3}, {3,5}}; // pairName5 is an array which contains three pairs.
    std::cout<<pairName5[1].first<<std::endl;
}  
std::pair<int,int> giveSumMultiple(int first, int second) {
    int sum=first+second;
    int multiple=first*second;
    return std::make_pair(sum,multiple);
} 
int main(){
    system("clear");
    explainPairs();
    std::cout<<"Sum: "<<giveSumMultiple(3,5).first<<std::endl<<"Multiple: "<<giveSumMultiple(3,5).second<<std::endl; // here we can put different value in giveSumMultiple for first and second and it will still run.
    return 0;
}
