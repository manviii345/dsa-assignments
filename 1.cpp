#include <iostream>
using namespace std;

struct node
{ int data; 
 struct node * left; 
 struct node * right; 
};
struct node *root =nullptr;
struct node * newnode(int element)
{ struct node * temp =(node * )malloc(sizeof(node));
 temp->data=element;
 temp->left = temp->right = NULL;
 return temp; 
}
    void inorder(struct node *temp)
    {
        if(temp==NULL)
            return;
        inorder (temp->left);
        cout<<temp->data<<" ";      
        inorder (temp->right);
    }
    void preorder(struct node *temp)
    {
        if(temp==nullptr)
        return;
        cout<<temp->data<<" ";
        preorder (temp->left);      
        preorder (temp->right);
    }
    void postorder(struct node *temp)
    {
        if(temp==nullptr)
        return;
        postorder (temp->left);      
        postorder (temp->right);
        cout<<temp->data<<" ";
    }

    int main()
    {
        root =newnode(1);
        root->left=newnode(2);  
        root->right=newnode(3);
        inorder(root);  
        cout<<endl;
        preorder(root); 
        cout<<endl;
        postorder(root);

        return 0;
    }