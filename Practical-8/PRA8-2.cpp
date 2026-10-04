#include<iostream>
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

Tree* insertion(Tree* root, int value){
    if(root == NULL){
        return new Tree(value);
    }

    if(value < root->data){
        root->left = insertion(root->left,value);
    }

    if(value > root->data){
        root->right = insertion(root->right,value);
    }

    return root;
}

void inorder(Tree* root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    int nodes[] = {50,30,70,20,40,60,80};

    Tree* root = NULL;

    for(int i=0;i<7;i++){
        root = insertion(root,nodes[i]);
    }

    cout << "Inorder sequence: ";
    inorder(root);

    return 0;
}
