#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
typedef struct Tree{
    int data;
    struct Tree *left,*right;
}Tree;

Tree* createBSTree(Tree *root,int data){
    if(root == NULL){
        root=(Tree*)malloc(sizeof(Tree));
        if(root == NULL )   return NULL;
        else {
            root->data=data;
            root->left=root->right=NULL;
        }
    } 
    else if(data <= root->data) {
        root->left=createBSTree(root->left,data);
    } else if(data > root->data)
        root->right=createBSTree(root->right,data);
    return root;
}
/*
void createBST(Tree **root,int data) {
    Tree* temp,*temp2,*newNode;
    newNode=(Tree*)malloc(sizeof(Tree));
        if(!newNode)   return ;
        newNode->data=data;
        newNode->left=newNode->right=NULL;
    if(*root==NULL){
        *root=newNode;
    } else {
        temp=*root;
        while(temp!=NULL){
            temp2=temp;
            if(temp->data < data)   temp=temp->right;
            else temp=temp->left;
        }
        if(temp2->data < data)  temp2->right=newNode;
        else    temp2->left=newNode;
    }
}*/
int getHeight(Tree*root){
    int left,right;
    if(root == NULL)  return 0;
    else {
        left = getHeight(root->left);
        right=getHeight(root->right);
        return max(left,right)+1;
    }
}
int main()
{
    
    int n;
    scanf("%d",&n);
    int data;
    Tree *root=NULL;
    for(int i=0;i<n;i++){
        scanf("%d",&data);
        root = createBSTree(root,data);
    }
    printf("%d\n",getHeight(root));   
}