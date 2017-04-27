#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include <bits/stdc++.h>
using namespace std;
typedef struct Heap{
    int *arr;
    int cap;
}Heap;
Heap* createHeap(int cap){
    Heap *h=(Heap*)malloc(sizeof(Heap));
    h->cap=cap;
    h->arr=(int*)malloc(h->cap*sizeof(int));
    if(!h->arr) return NULL;
    return h;
}
void percolateDown(Heap *h,int i,int n){
    int l,r,max=i;
    l=2*i+1;
    r=2*i+2;
    if(l<n && h->arr[l] >= h->arr[max])
        max=l;
    if(r<n && h->arr[r] > h->arr[max])
        max=r;
    if(max!=i){
        swap(h->arr[i],h->arr[max]);
        percolateDown(h,max,n);
    }
}
long deleteMax(Heap *h,int n){
    if(n ==0)    return -1;
    long data = h->arr[0];
    h->arr[0] = h->arr[0] - 1;
    percolateDown(h,0,n);
    return data;
}
int main()
{
    
    int n,m;
    scanf("%d %d",&n,&m);
    Heap *h=createHeap(n);
    for(int  i=0;i<n;i++){
        scanf("%d",&h->arr[i]);
    }
    for(int i=(n-1)/2;i>=0;i--){
        percolateDown(h,i,n);
    }
    int res=0;
    while(m>0){
        res=res+deleteMax(h,n);
        m--;
    }
    printf("%d\n",res);
    if(h){
        if(h->arr)
            free(h->arr);
        free(h);
    }
}