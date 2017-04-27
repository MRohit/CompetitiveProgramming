#include <iostream>
#include<stdlib.h>
#include<set>
using namespace std;
/*typedef struct Tree{
    int data;
    int distinct;
    struct Tree*left,*right;
}Tree;
Tree* createBST(Tree *root,int data){
    if(!root){
        root=(Tree*)malloc(sizeof(Tree));
        if(root == NULL )   return NULL;
        else {
            root->data=data;
            root->left=root->right=NULL;
        }
    } else if(data <= root->data){
        if(data != root->data) count++;
        
        root->left = createBST(root->left,data);
    } else {
        count++;
        root->right = createBST(root->right,data);
    } 
    return root;
    
}
int getNumberOfNodes(Tree* node, set<int>& uniqueValues)
{
    if (node != NULL)
    {
       
       if ( uniqueValues.find( node->data ) == uniqueValues.end() )
       {
          
          uniqueValues.insert ( node->data );
       }

       return getNumberOfNodes(node->left,uniqueValues) + getNumberOfNodes(node->right,uniqueValues);
    }
    else
        return 0;
}*/
int main() {
	// your code goes here
	int t,n,x,data;
	cin>>t;
	set<int> uniqueValues;
	while(t>0){
	    cin>>n>>x;
	    //Tree *root = NULL;
	    
	    for(int i=0;i<n;i++) {
	        cin>>data;
	        uniqueValues.insert(data);
	       // root=createBST(root,data);
	    }
	    //root=NULL;
	    
	    //getNumberOfNodes(root,uniqueValues);
	   // cout<<"\nCount:"<<uniqueValues.size()<<endl;
	    if(uniqueValues.size() == x) {
	        cout<<"Good"<<endl;
	    } else if(uniqueValues.size() > x){
	        cout<<"Average"<<endl;
	    } else{
	       cout<<"Bad"<<endl;  
	    }
	    uniqueValues.clear();
	    //root=NULL;
	    
	    t--;
	}
	return 0;
}
