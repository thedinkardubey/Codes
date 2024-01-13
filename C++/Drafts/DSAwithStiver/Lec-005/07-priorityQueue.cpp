#include<iostream>
#include<queue>
/**
 * Syntax:
 * std::priorty_queue<dataType> priorityQueue'sName;
*/
std::priority_queue<int> taskList;
//----If you want to set the priority to lowest value in simple words descending order use like below----
std::priority_queue<int, std::vector<int>, std::greater<int>> taskListDescending ;

void printPriorityQueue(std::priority_queue<int> &tempTaskList){  
    std::cout<<"The priority queue is: [";
    std::priority_queue<int> tempList = tempTaskList;
    while(!tempList.empty()){
        std::cout<<" "<<tempList.top();
        tempList.pop();
    }
    std::cout<<" ]"<<std::endl;
}

void printPriorityQueueDescending(std::priority_queue<int, std::vector<int>, std::greater<int>> &tempTaskListDescending){  
    std::cout<<"The priority queue is: [";
    std::priority_queue<int, std::vector<int>, std::greater<int>> tempListDescending = tempTaskListDescending;
    while(!tempListDescending.empty()){
        std::cout<<" "<<tempListDescending.top();
        tempListDescending.pop();
    }
    std::cout<<" ]"<<std::endl;
}

void explainPriorityQueue(){
    taskList.push(3);
    taskList.push(5);
    taskList.push(2);
    taskList.emplace(1);
    std::cout<<taskList.top()<<std::endl; // by defualt it will give the largest element in the queue unless specified.
    //taskList.pop();
    std::cout<<taskList.top()<<std::endl; // still gives the largest element left after poping operartion.
    printPriorityQueue(taskList);
    std::cout<<"The above does not show the placement of element rather it shows how the elements are poped."<<std::endl;
    // implemented using maxHeap.

    //----If you want to set the priority to lowest value in simple words descending order use like below----
    taskListDescending.push(3);
    taskListDescending.push(31);
    taskListDescending.push(2);
    taskListDescending.emplace(12);
    printPriorityQueueDescending(taskListDescending);
    // implemented using minHeap.
}
int main(){
    system("clear");
    explainPriorityQueue();
    return 0;
}