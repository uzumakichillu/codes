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
void bfs(int s,node *head[],int n){
    vector <int> visited(n,0);
    visited[s]=1;
    queue<int>q;
    q.push(s);
    while(q.empty()==0){
        int x=q.front();
        cout<<x<<endl;
        q.pop();
        node *tmp=head[x];
        while(tmp!=NULL){
            if(visited[tmp->data]==0){
                visited[tmp->data]=1;
                q.push(tmp->data);
            }
            tmp=tmp->next;
        }
    }
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
        //tmp[des]=addedge(des,src,tmp[des]);
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
    bfs(0,tmp,n);
   
    return 0;
}
