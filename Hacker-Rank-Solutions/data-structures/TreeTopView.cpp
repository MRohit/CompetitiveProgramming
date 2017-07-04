#include<stack>
/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/

void top_view(node * root)
{
    node *temp=root->left;
    stack<node*> st;
    while(temp!=NULL){
        //cout<<temp->data<<" ";
        st.push(temp);
        temp = temp->left;
    }
    while(!st.empty()){
        cout<<st.top()->data<<" ";
        st.pop();
    }
    cout<<root->data<<" ";
    temp = root->right;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->right;
    }
  
}
