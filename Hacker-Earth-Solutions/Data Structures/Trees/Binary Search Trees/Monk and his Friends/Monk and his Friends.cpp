#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
typedef struct Tree{
    long int data;
    struct Tree *left,*right;
}Tree;

Tree* createBSTree(Tree *root,long int data){
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
Tree* createBSTree2(Tree *root,long data){
    //int lflag = 0,rflag = 0;
    if(root == NULL){
        root=(Tree*)malloc(sizeof(Tree));
        if(root == NULL )   return NULL;
        else {
            root->data=data;
            root->left=root->right=NULL;
        }
    } 
    else if(data <= root->data) {
        if(data == root->data)
            printf("YES\n");
        else
            printf("NO\n");
        root->left=createBSTree2(root->left,data);
    } else if(data > root->data) {
        root->right=createBSTree2(root->right,data);
        
    }
    return root;
}

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
Tree *search(Tree *root,long int key){
    if(root==NULL || root->data == key)
        return root;
    if(key > root->data)
        return search(root->right,key);
    return search(root->left,key);
}
void preOrder(Tree *root){
    if(root){
        printf("%ld ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
int main()
{
    
    //long n;
    int t;
    long n,m;
    long int data;
    Tree *root=NULL;
    scanf("%d",&t);
    while(t>0){
        scanf("%ld %ld",&n,&m);
        
        for(long i=0;i<(n+m);i++) {
            scanf("%ld",&data);
            
            if(i>=n){
                Tree* r = search(root,data);
                if(r)
                    printf("YES\n");
                else
                    printf("NO\n");
                r = NULL;
            }
            
            root=createBSTree(root,data);
        }
        root=NULL;
        t--;
    }
   // preOrder(root);
    
    
}