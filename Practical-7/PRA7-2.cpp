#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int x){
        this->data = x;
        this->next = NULL;
    }
};

class hospital{
    public:
    Node* front;
    Node* rear;

    hospital(){
        front = NULL;
        rear = NULL;
    }

    void push(int x){
        Node* newnode = new Node(x);

        if(rear == NULL){
            front = newnode;
            rear = newnode;
        }
        else{
        rear->next = newnode;
        rear = newnode;
        }
        cout<<newnode->data<<"  New patients are added"<<endl;

        peek();
    }

    void pop(){
        if(front == NULL){
            cout<<" no patients waiting !"<<endl;
        }
        Node* temp = front;
        front = front->next;

        if(front == NULL){
            rear == NULL;
        }
        cout<<temp->data<<"  patient is arrive"<<endl;
        delete temp;
        peek();
    }

    void peek(){
        if(front == NULL){
            cout<<" no patients waiting !"<<endl;
        }

        cout<<front->data<<"  is the current front patient"<<endl;
    }
};

int main(){
    hospital h;
    h.push(5);
    h.push(10);
    h.push(40);
    h.pop();
    h.peek();
    h.pop();
    h.push(50);

    return 0;
}