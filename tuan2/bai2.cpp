#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int x){
        data = x;
next = nullptr;
}
};
Node* themdau(Node* head, int data){
    Node* p = new Node(data);
    p -> next = head;
    head = p;
    return head;
}
// do phuc tap o(1)

Node* themcuoi(Node* head, int data){
    Node*p = new Node(data);
    Node* tmp = head;
    if(head == nullptr){
        return p;
    }
    while(tmp->next != nullptr){
        tmp = tmp ->next;
    }
    tmp ->next = p;
    return head;
}
// do phuc tap o(n)

Node* themgiua(Node* head, int data, int pos){
    Node*p = new Node(data);
    Node*tmp = head;
    int count = 0;
    while (count<pos){
        tmp = tmp -> next;
        count ++;
    }
    Node* k = tmp ->next;
    tmp -> next = p;
    p -> next = k;
}
// do phuc tap o(n)
Node *xoadau(Node*head){
    Node*tmp = head;
    head = head->next;
    delete tmp;
    return head;
}
// do phuc tap o(1)
Node* xoacuoi(Node*head){
    Node*tmp = head;
    while(tmp->next->next !=nullptr){
        tmp = tmp->next;
    }
    Node* k = tmp->next;
    tmp ->next = nullptr;
    delete k;
    return head;
}
// do phuc tap o(n)
Node* xoagiua(Node*head,int pos){
    Node*tmp = head;
    int count =0;
    while(count < pos){
        tmp = tmp ->next; 
    }
    Node*k = tmp->next;
    tmp = tmp->next->next;
    delete k;
    return head;
}
// do phuc tap o(n)