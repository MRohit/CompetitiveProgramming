#include <queue> 
using namespace std;
/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

void LevelOrder(node * root)
{
  queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node *r = q.front();
        q.pop();
        cout<<r->data<<" ";
        if(r->left)
            q.push(r->left);
        if(r->right)
            q.push(r->right);
    }
  
}
