#include<iostream>
using namespace std;

const int size = 10;

class queue{

    public:

    int arr[size];
    int front;
    int rear;
    queue(){
    front = -1;
    rear = -1;
    }
    void push(int x){
        if(rear == size-1){
            cout<<"queue is overflow ! "<<endl;
        }
        else if(front == -1){
            front++;
            rear++;
            arr[rear] = x;
            cout<< x <<"  is successful join "<<endl;
            peek();
        }
        else{
            rear++;
            arr[rear] = x;
            cout<< x <<"  is successful join "<<endl;
            peek();
        }
    }

    void pop(){
        if(front == -1){
            cout<<"queue is underflow !"<<endl;
        }
        else if(front == rear){
            cout<< arr[front] <<"  successful  served "<<endl;
            front = -1;
            rear = -1;
        }
        else{
            cout<< arr[front] <<"  successful  served "<<endl;
            front++;
            peek();
        }
        
    }

    void peek(){
        if(front == -1){
            cout<<"queue is underflow !"<<endl;
        }
        else{
            cout<< arr[front] <<"  is  current front token "<<endl;
        }
    }
};

int main(){
    queue q;
    q.push(5);
    q.push(10);
    q.push(40);
    q.pop();
    q.peek();
    q.pop();
    q.push(50);

    return 0;
}