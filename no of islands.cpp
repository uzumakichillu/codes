{
#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int main() {
    
	int T;
	cin>>T;
	while(T--)
	{
		int N,M;
		cin>>N>>M;
		vector<int> A[N];
		for(int i=0;i<N;i++){
		    vector<int> temp(M);
		    A[i] = temp;
		    for(int j=0;j<M;j++){
		        cin>>A[i][j];
		    }
		}
		cout<<findIslands(A,N,M)<<endl;
	}
	return 0;
}
}
int safe(vector <int> A[],vector<vector<int>>& visited,int row, int col,int N,int M){ 
    
    return (row>=0)&&(row<N)&&(col>=0)&&(col<M)&&(A[row][col]&&!visited[row][col]); 
} 
void dfs(vector <int> A[],vector<vector<int>>& visited,int row,int col,int N,int M){
    static int rowNbr[] = { -1, -1, -1, 0, 0, 1, 1, 1 }; 
    static int colNbr[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
    visited[row][col]=1;
    for(int i=0;i<8;i++){
        if(safe(A,visited,row+rowNbr[i],col+colNbr[i],N,M))
            dfs(A,visited,row+rowNbr[i],col+colNbr[i],N,M);
    }
}
int findIslands(vector<int> A[], int N, int M)
{
    // Your code here
    vector<vector<int>>visited(N);
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            visited[i].push_back(0);
        }
    }
    int count=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(A[i][j]==1 && visited[i][j]==0){
                dfs(A,visited,i,j,N,M);
                count++;
            }
        }
    }
    return count;
}
