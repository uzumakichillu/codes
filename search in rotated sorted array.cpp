class Solution {
public:
    int search(vector<int>& v, int target) {
        int n=v.size();
        int l=0,r=n-1,ind=-1;
        if(n==1 && v[0]==target)
            return 0;
        if(n==1)
            return -1;
        if(n==0)
            return -1;
        
        //int ans;
        if(v[0]<v[n-1])
            ind=0;
        else{
            while(l<=r){
            int mid=l+(r-l)/2;
            if(v[mid]>v[mid+1]){
                ind=mid+1;
                break;
            }
            
            if(v[mid-1]>v[mid]){
                ind=mid;
                break;
            }               
            
            if(1){
                if(v[0]>v[mid]){
                    r=mid-1;                    
                }
                else{
                    l=mid+1;
                }
            }
        }}      
        
        int i=-1;
        if(target<=v[n-1]){
            l=ind;
            r=n-1;                
        }
        else{
            l=0;
            r=ind-1;
        }
        while(l<=r){
            int mid=l+(r-l)/2;
            if(v[mid]==target){
                i=mid;
                break;
            }
            else if(v[mid]<target){
                l=mid+1;
            }
            else{
                r=mid-1;
            }            
        }
        return i;
    }
};
