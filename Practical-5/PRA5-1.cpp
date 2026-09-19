#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};

Node *newcreat()
{
    Node *newnode = new Node();
    cout << "enter your Data : ";
    cin >> newnode->data;
    newnode->next = NULL;
    newnode->prev = NULL;
    return newnode;
}

int main()
{
    Node *head = NULL;

    int choice;
    int position;
    do
    {
        cout << endl;
        cout << "1. added to the beginning : " << endl;
        cout << "2. added to the end : " << endl;
        cout << "3. inserted right after  currently : " << endl;
        cout << "4. remove first : " << endl;
        cout << "5. display count : " << endl;
        cout << "6. Exit! " << endl;
        cout << endl
             << "enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            Node *newnode = newcreat();
            if (head == NULL)
            {
                head = newnode;
            }
            else
            {
                newnode->next = head;
                head->prev = newnode;
                head = newnode;
            }
            Node *p = head;
            while (p != NULL)
            {
                cout << p->data << " ->> ";

                p = p->next;
            }
            cout << "NULL";
            cout << endl
                 << endl;
            break;
        }
        case 2:
        {
            Node *newnode = newcreat();
            if (head == NULL)
            {
                head = newnode;
            }
            else if (head->next == NULL)
            {
                head->next = newnode;
                newnode->prev = head;
            }
            else
            {
                Node *temp = head;
                while (temp->next != NULL)
                {
                    temp = temp->next;
                }
                temp->next = newnode;
                newnode->prev = temp;
            }
            Node *p = head;
            while (p != NULL)
            {
                cout << p->data << " ->> ";

                p = p->next;
            }
            cout << "NULL";
            cout << endl
                 << endl;
            break;
        }
        case 3:
        {
            Node *newnode = newcreat();

            cout << "enter your currently played song_number : " << endl;
            cin >> position;

            Node *save = head;

            while (save != NULL && save->data != position)
            {
                save = save->next;
            }
            if (save == NULL)
            {
                cout << "not found" << endl;
            }
            else
            {
                newnode->next = save->next;
                newnode->prev = save;

                if (save->next != NULL)
                {
                    save->next->prev = newnode;
                }

                save->next = newnode;
            }

            Node *p = head;
            while (p != NULL)
            {
                cout << p->data << " ->> ";

                p = p->next;
            }
            cout << "NULL";
            cout << endl
                 << endl;
            break;
        }
        case 4:
        {
            if (head == NULL)
            {
                cout << "playlist is empty! " << endl;
            }
            else
            {
                Node *temp = head;
                head = head->next;

                if (head != NULL)
                {
                    head->prev = NULL;
                }

                delete temp;
            }
            Node *p = head;
            while (p != NULL)
            {
                cout << p->data << " ->> ";

                p = p->next;
            }
            cout << "NULL";
            cout << endl
                 << endl;
            break;
        }
        case 5:
        {
            Node *save = head;
            int count = 0;
            while (save != NULL)
            {
                count++;
                save = save->next;
            }
            cout << "your total count is : " << count << endl;
            Node *p = head;
            while (p != NULL)
            {
                cout << p->data << " ->> ";

                p = p->next;
            }
            cout << "NULL";
            cout << endl
                 << endl;
            break;
        }
        case 6:
        {

            cout << "thank you !" << endl;
            Node *p = head;
            while (p != NULL)
            {
                cout << p->data << " ->> ";

                p = p->next;
            }
            cout << "NULL";
            cout << endl
                 << endl;

            break;
        }
        default:
        {
            cout << "invalid choice " << endl;
        }
        }

    } while (choice != 6);
}