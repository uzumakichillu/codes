#include<bits/stdc++.h>
using namespace std;
void dfs(int s,int d,vector <vector<int>>& g,vector<vector<int>>& tc){
    tc[s][d]=1;
    for(int i=0;i<g[d].size();i++){
        if(tc[s][i]==0 && g[d][i]==1){
            dfs(s,i,g,tc);
        }
    }
}
void dfs1(int s,int v,vector <int> g[],vector<vector<int>>& tc){
    tc[s][v]=1;
    for(auto it=g[v].begin();it!=g[v].end();it++){
        if(tc[s][*it]==0){
            dfs1(s,*it,g,tc);
        }
    }
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>vv(n,0);
	    vector <vector<int>>g(n,vv);
	    vector <vector<int>>tc(n,vv);
	    vector <int>adj[n];
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            cin>>g[i][j];
	            if(g[i][j]!=0){
	                adj[i].push_back(j);
	            }
	        }
	    }
	    for(int i=0;i<n;i++){
	        //dfs(i,i,g,tc);
	        dfs1(i,i,adj,tc);
	    }
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++)
	            cout<<tc[i][j]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
