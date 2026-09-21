#include <iostream>
using namespace std;

const int size = 10;

class stack
{
public:
    int arr[size];
    int top;

    stack()
    {
        top = -1;
    }

    void push(int x)
    {
        if (top == size - 1)
        {
            cout << "no more trays can be added" << endl;
            cout << "stack overflow !" << endl;
        }
        else
        {
            top++;
            arr[top] = x;
            cout << x << "  push into stack successful !" << endl;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "no tray can be taken !" << endl;
            cout << "stack underflow !" << endl;
        }
        else
        {
            cout <<arr[top] << "  popped from stack !" << endl;
        }
    }

    void peek()
    {
        if (top == -1)
        {
            cout << "no top tray available !" << endl;
        }
        else
        {
            cout << "the current top tray is : " << arr[top] << endl;
        }
        cout << endl
             << endl;
    }
};

int main()
{
    stack s;
    int choice;
    int x;

    do
    {
        cout << "1. new tray added in cafeteria stacks : " << endl;
        cout << "2. customers take tray from the cafeteria stacks : " << endl;
        cout << "3. current top tray in the cafeteria stacks : " << endl;
        cout << "4. exit : " << endl;
        cout << "enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << endl;
            cout << "enter your tray number : ";
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