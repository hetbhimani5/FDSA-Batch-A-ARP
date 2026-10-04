#include<iostream>
#include<queue>
using namespace std;

class Tree{
    public:
    int data;
    Tree* left;
    Tree* right;

    Tree(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void HR(Tree* root){
    if(root == NULL){
        return;
    }

    HR(root->left);
    cout<<root->data<<" ";
    HR(root->right);
}

void archive(Tree* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    archive(root->left);
    archive(root->right);
}

void payroll(Tree* root){
    if(root == NULL){
        return;
    }

    payroll(root->left);
    payroll(root->right);
    cout<<root->data<<" ";
}

void floormanager(Tree* root){
    if(root == NULL){
        return;
    }
    queue<Tree*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Tree* current = q.front();
        q.pop();

        if(current == NULL){
            cout<<endl;
            if(q.empty()){
                break;
            }
            else{
                q.push(NULL);
            }
        }
        else{
            cout<<current->data<<" ";
            if(current->left != NULL){
                q.push(current->left);
            }
            if(current->right != NULL){
                q.push(current->right);
            }
        }
    }
}

int main(){

    Tree* root = new Tree(1);

    root->left = new Tree(2);
    root->right = new Tree(3);

    root->left->left = new Tree(4);
    root->left->right = new Tree(5);

    root->right->left = new Tree(6);
    root->right->right = new Tree(7);

    cout << "Inorder: ";
    HR(root);

    cout << "\nPreorder: ";
    archive(root);

    cout << "\nPostorder: ";
    payroll(root);

    cout << "\nLevel Order: "<<endl;
    floormanager(root);

    return 0;

}