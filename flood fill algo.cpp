#include<bits/stdc++.h>
using namespace std;
void func(vector <vector <int>>& a,int r,int c,int newc,int oldc,int n,int m){
    if(r<0 || r>=n || c<0 || c>=m){
        return;
    }
    if(a[r][c]!=oldc)
        return;
    a[r][c]=newc;
    func(a,r+1,c,newc,oldc,n,m);
    func(a,r,c+1,newc,oldc,n,m);
    func(a,r-1,c,newc,oldc,n,m);
    func(a,r,c-1,newc,oldc,n,m);
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    vector<vector<int>>a(n);
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            int x;
	            cin>>x;
	            a[i].push_back(x);
	        }
	    }
	    int row,col,k;
	    cin>>row>>col>>k;
	    int oldc=a[row][col];
	    func(a,row,col,k,oldc,n,m);
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            cout<<a[i][j]<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
