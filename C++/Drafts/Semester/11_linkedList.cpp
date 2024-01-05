#include<iostream>
#include<cstdlib>

// Node class 

class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data=value;
        next=nullptr;
    }
};

// LinkedList class

class LinkedList{
    private:
    Node* head;
    public:
    // Constructor
    LinkedList(){
        head=nullptr;
    }
    ~LinkedList(){
        while (head!=nullptr)    
        {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        
    }
    // Insert at the beginning of the linkedlist
    void insertAtBeginning(int value){
        Node* newNode=new Node(value);
        newNode->next=head;
        head=newNode;
    }
};