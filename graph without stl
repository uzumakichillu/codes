#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
};
node* addedge(int src,int des,node *head){
    if(head==NULL){
        node *tmp=new node();
        tmp->data=des;
        tmp->next=NULL;
        head=tmp;
        
    }
    else{
        node *tmp=head;
        while(tmp->next!=NULL){
            tmp=tmp->next;
        }
        node *nd=new node();
        nd->data=des;
        nd->next=NULL;
        tmp->next=nd;
    }
    return head;
}
int main()
{
    int n;
    cin>>n;
    node *tmp[n];
    for(int i=0;i<n;i++){
        tmp[i]=NULL;
    }
    int e;
    cin>>e;
    for(int i=0;i<e;i++){
        int src,des;
        cin>>src>>des;
        tmp[src]=addedge(src,des,tmp[src]);
    }
    for(int i=0;i<n;i++){
        node *tmp1;
        tmp1=tmp[i];
        cout<<"vertex "<<i<<"->";
        while(tmp1!=NULL){
            cout<<tmp1->data<<" ";
            tmp1=tmp1->next;
        }
        cout<<endl;
    }
    
    return 0;
}
