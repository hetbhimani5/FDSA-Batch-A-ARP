#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};

int main()
{
    cout << "=== using SLL ===" << endl;
    Node *head = NULL;
    int choice;
    do
    {
        cout << " 1 : insert student at any position : " << endl;
        cout << " 2 : delete student : " << endl;
        cout << " 3 : display : " << endl;
        cout << " 4 : exit !" << endl
             << endl;
        cout << "enter your choice : " << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            Node *newnode = new Node();
            int pos;
            cout << "enter your student number : " << endl;
            cin >> newnode->data;
            cout << "enter your position which you want to enter student : " << endl;
            cin >> pos;
            if (pos < 1)
            {
                cout << "invalid position!" << endl;
                delete newnode;
                break;
            }
            if (head == NULL)
            {
                if (pos == 1)
                {
                    head = newnode;
                    newnode->next = head;
                }
                else
                {
                    cout << "invalid position!" << endl;
                    delete newnode;
                }
            }
            else if (pos == 1)
            {
                Node *temp = head;

                while (temp->next != head)
                {
                    temp = temp->next;
                }
                newnode->next = head;
                temp->next = newnode;
                head = newnode;
            }
            else
            {
                int count = 1;
                Node *temp = head;
                while (count < pos - 1 && temp->next != head)
                {
                    temp = temp->next;
                    count++;
                }
                newnode->next = temp->next;
                temp->next = newnode;
            }
            Node *p = head;
            while (p->next != head)
            {
                cout << p->data << " ->> ";

                p = p->next;
            }
            cout << p->data << " ->> ";
            cout << "NULL";
            cout << endl
                 << endl;
            break;
        }
        case 2:
        {
            int n;
            cout << "enter your student nummber which you want to delete : " << endl;
            cin >> n;
            Node *temp = head;
            Node *save = NULL;
            if (head == NULL)
            {
                cout << "your group is empty !" << endl
                     << endl;
                break;
            }
            do
            {
                if (temp->data == n)
                {
                    break;
                }

                save = temp;
                temp = temp->next;

            } while (temp != head);
            if (temp->data != n)
            {
                cout << "student not found !" << endl
                     << endl;
            }
            else if (temp->next == head && head->next == head)
            {
                delete head;
                head = NULL;
            }
            else if (temp == head)
            {
                Node *last = head;
                while (last->next != head)
                {
                    last = last->next;
                }
                head = head->next;
                last->next = head;
                delete temp;
            }
            else if (temp->next == head)
            {
                save->next = head;
                delete temp;
            }
            else
            {
                save->next = temp->next;
                delete temp;
            }
            if (head == NULL)
            {
                cout << "your group is empty !" << endl
                     << endl;
                break;
            }
            Node *p = head;
            while (p->next != head)
            {
                cout << p->data << " ->> ";

                p = p->next;
            }
            cout << p->data << " ->> ";
            cout << "NULL";
            cout << endl
                 << endl;
            break;
        }
        case 3:
        {
            if (head == NULL)
            {
                cout << "your group is empty !" << endl
                     << endl;
                break;
            }
            Node *p = head;
            while (p->next != head)
            {
                cout << p->data << " ->> ";

                p = p->next;
            }
            cout << p->data << " ->> ";
            cout << "NULL";
            cout << endl
                 << endl;
            break;
        }
        case 4:
        {
            cout << "thank you !" << endl;
            break;
        }
        default:
            cout << "invalid choice !" << endl
                 << endl;
            break;
        }
    } while (choice != 4);

    cout << endl
         << endl;
    cout << "=== using DLL ===" << endl;

    head = NULL;
    int c;
    do
    {
        cout << " 1 : insert student at any position : " << endl;
        cout << " 2 : delete student : " << endl;
        cout << " 3 : display : " << endl;
        cout << " 4 : exit !" << endl
             << endl;
        cout << "enter your choice : " << endl;
        cin >> c;

        switch (c)
        {
        case 1:
        {
            Node *newnode = new Node();
            int pos;
            int data;
            cout << "enter your student number : " << endl;
            cin >> newnode->data;
            cout << "enter your position which you want to enter student : " << endl;
            cin >> pos;
            if (pos < 1)
            {
                cout << "invalid position!" << endl;
                delete newnode;
                break;
            }
            if (head == NULL)
            {
                if (pos == 1)
                {
                    head = newnode;
                    newnode->next = head;
                    newnode->prev = head;
                }
                else
                {
                    cout << "invalid position!" << endl;
                    delete newnode;
                }
            }
            else if (pos == 1)
            {
                Node *temp = head;
                while (temp->next != head)
                {
                    temp = temp->next;
                }
                newnode->next = head;
                head->prev = newnode;
                newnode->prev = temp;
                temp->next = newnode;
                head = newnode;
            }
            else
            {
                Node *temp = head;
                int count = 1;
                while (count < pos - 1 && temp->next != head)
                {
                    temp = temp->next;
                    count++;
                }
                newnode->prev = temp;
                newnode->next = temp->next;
                temp->next->prev = newnode;
                temp->next = newnode;
            }
            Node *p = head;
            while (p->next != head)
            {
                cout << p->data << " ->> ";

                p = p->next;
            }
            cout << p->data << " ->> ";
            cout << "NULL";
            cout << endl
                 << endl;
            break;
        }
        case 2:
        {
            int n;
            cout << "enter your student number which you want to delete : " << endl;
            cin >> n;
            Node *temp = head;
            Node *save = NULL;

            if (head == NULL)
            {
                cout << "your group is empty !" << endl
                     << endl;
                break;
            }
            do
            {
                if (temp->data == n)
                {
                    break;
                }
                save = temp;
                temp = temp->next;
            } while (temp != head);

            if (temp->data != n)
            {
                cout << "not found !" << endl;
            }
            else if (temp->next == head && head->next == head)
            {
                delete head;
                head = NULL;
            }
            else if (temp == head)
            {
                Node *last = head;
                while (last->next != temp)
                {
                    last = last->next;
                }
                head = head->next;
                last->next = head;
                head->prev = last;
                delete temp;
            }
            else if (temp->next == head)
            {
                save->next = head;
                head->prev = save;
                delete temp;
            }
            else
            {
                save->next = temp->next;
                save->next->prev = save;
                delete temp;
            }
            if (head == NULL)
            {
                cout << "your group is empty !" << endl
                     << endl;
                break;
            }
            Node *p = head;
            while (p->next != head)
            {
                cout << p->data << " ->> ";

                p = p->next;
            }
            cout << p->data << " ->> ";
            cout << "NULL";
            cout << endl
                 << endl;
            break;
        }
        case 3:
        {
            if (head == NULL)
            {
                cout << "your group is empty !" << endl
                     << endl;
                break;
            }
            Node *p = head;
            while (p->next != head)
            {
                cout << p->data << " ->> ";

                p = p->next;
            }
            cout << p->data << " ->> ";
            cout << "NULL";
            cout << endl
                 << endl;

            break;
        }
        case 4:
        {
            cout << "thank tou !" << endl;
            break;
        }
        default:
            cout << "invalid choice !" << endl;
            break;
        }
    } while (c != 4);
    return 0;
}