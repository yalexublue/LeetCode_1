//
//  LinkedList.hpp
//  LeetCodePractice
//
//  Created by Ye Xu on 6/10/21.
//

#ifndef LinkedList_hpp
#define LinkedList_hpp

#include <stdio.h>

class Node{
public:
    int val;
    Node* next;
    Node(){this->val = 0; this->next = nullptr;}
    Node(int input): val(input), next(nullptr){}
    Node(int inVal, Node* inNext){this->val = inVal; this->next = inNext;}
};

class LinkedList{
public:
    Node* head;
    LinkedList(){head = new Node(); head->next = nullptr;}
    LinkedList(const LinkedList& rhs);
    ~LinkedList(){clear(); delete head;}
    void clear(){
        while(!isEmpty()){
            popFront();
        }
    }
    bool isEmpty(){return head->next == nullptr; }
    void popFront(){
        Node* temp = head->next;
        head->next = temp->next;
        delete temp;
    }
    void append(int inData){
        Node* temp = new Node(inData);
        temp->next = head->next;
        head->next = temp;
    }
};

#endif /* LinkedList_hpp */
