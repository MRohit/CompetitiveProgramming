#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
typedef struct Tree{
    long data;
    struct Tree *left,*right;
}Tree;

Tree* createBSTree(Tree *root,long data){
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
long getMax(Tree*root,long a,long b){
    if(root==NULL)  return -1;
    
    long max,lmax,rmax;
    max = root->data;
    if(a >= root->data)
        lmax = getMax(root->left,a,b);  
    
    if(b <= root->data)
        rmax = getMax(root->right,a,b);
    
    if(lmax > max)
            max = lmax;
        if(rmax > max)
            max =rmax;
    return max;
}
int main()
{
    
    long n;
    scanf("%ld",&n);
    long data;
    Tree *root=NULL;
    for(int i=0;i<n;i++){
        scanf("%ld",&data);
        root = createBSTree(root,data);
    }
    long a,b;
    scanf("%ld %ld", &a,&b);
    long m = max(a,b);
    long m2 = getMax(root,a,b);
    if(m2 >= m)
        printf("%ld\n",m2);
    else
        printf("%ld\n",m);
    
}