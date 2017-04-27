#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
typedef struct H{
    long *arr;
    int cap,count;
    
}Heap;
Heap* createHeap(int cap){
    Heap *h=(Heap*)malloc(sizeof(Heap));
    h->cap=cap;
    h->count=0;
    h->arr=(long*)malloc(h->cap*sizeof(long));
    if(!h->arr) return NULL;
    return h;
}
int percolateDown(Heap *h,int i,int cnt){
    int l,r,max=i;
    l=2*i+1;
    r=2*i+2;
    
    if(l<h->count && h->arr[l] > h->arr[max]) {
        max=l;
        //cnt++;
    }
        
    if(r<h->count && h->arr[r] < h->arr[max]){
        //cnt++;
        max=r;
    }
      
    if(max!=i){
        cnt++;
        swap(h->arr[i],h->arr[max]);
        cnt = percolateDown(h,max,cnt);
        //percolateDown(h,2*max+2,cnt);
    }
    //printf("\nCNT:%d",cnt);
    return cnt;
}
int main()
{
    int n;
    scanf("%d",&n);
    
    Heap *h=createHeap(n);
    for(int i=0;i<n;i++){
        scanf("%ld",&h->arr[i]);
    }
    h->count = n;
    int cnt=0;
    for(int i=(h->count-1)/2;i>=0;i--)
        cnt = percolateDown(h,i,cnt);
    printf("%d\n",cnt);
}