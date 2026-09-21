#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

class stack{
    public:
    Node* top;

    stack(){
        top = NULL;
    }

    void push(int x){
        Node* newnode = new Node();
        newnode->data = x;
        newnode->next = top;
        top = newnode;

        cout<<x<<" push into stack successful !" << endl;
    }

    void pop(){
        if(top==NULL){
            cout << "no page in browser !" << endl;
            cout << "stack underflow !" << endl;
        }
        else{
        Node* temp = top;
        cout <<temp->data << " is the most recently visited page !" << endl;
        top = top->next;

        delete temp;
        }
    }

    void peek(){
        if(top==NULL){
            cout << "no top page available !" << endl;
        }
        else{
            cout << "the current top page is : " << top->data << endl;
        }
        cout<<endl<<endl;
    }
};

int main()
{
    stack s;
    int choice;
    int x;

    do
    {
        cout << "1. new visited page added in browser : " << endl;
        cout << "2. back button : " << endl;
        cout << "3. current top page in the browser : " << endl;
        cout << "4. exit : " << endl;
        cout << "enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << endl;
            cout << "enter your page number : ";
            cin >> x;
            s.push(x);
            s.peek();
            break;
        case 2:
            cout<<endl;
            s.pop();
            s.peek();
            break;
        case 3:
            cout<<endl;
            s.peek();
            break;
        case 4:
            cout<<"thank you!"<<endl;
            break;
        default:
            cout << "invalid choice !" << endl;
            break;
        }
    } while (choice != 4);

    return 0;
}

