#include <iostream>
#include<stdlib.h>
using namespace std;
typedef struct h{
    long long int *arr;
    int cap,count;
}Heap;
Heap* createHeap(int cap){
    Heap *h=(Heap*)malloc(sizeof(Heap));
    h->count=0;
    h->cap=cap;
    h->arr=(long long int*)malloc(h->cap*sizeof(long long int));
    if(!h->arr) return NULL;
    return h;
}
void percolateDown(Heap *h,int i){
    int l,r,max = i;
    l = 2*i+1;
    r=2*i+2;
    if(l<h->count && h->arr[l] > h->arr[max])
        max = l;
    if(r<h->count && h->arr[r] > h->arr[max])
        max = r;
    if(max!=i){
        swap(h->arr[max],h->arr[i]);
        percolateDown(h,max);
    }
}
long long int eatCandies(Heap *h){
    long long int data = h->arr[0];
    h->arr[0] = (h->arr[0]/2);
    percolateDown(h,0);
    return data;
}
void deleteHeap(Heap *h){
    if(h){
        if(h->arr)  
            free(h->arr);
        free(h);
    }
}
int main() {
	// your code goes here
	long long int data;
	int t,n,x;
	cin>>t;
	
	while(t>0){
	    cin>>n>>x;
	    Heap *h=createHeap(n);
	    long long int sum = 0;
	    for(int i=0;i<n;i++){
	        cin>>data;
	        h->arr[i]=data;
	        h->count++;
	    }
	    for(int i=(h->count-1)/2;i>=0;i--){
	            percolateDown(h,i);
	    }
	    for(int i=0;i<x;i++) {
	        data = eatCandies(h);
	        sum = sum + data;
	    }
	    cout<<sum<<endl;
	    
	    deleteHeap(h);
	    t--;
	}
	return 0;
}
