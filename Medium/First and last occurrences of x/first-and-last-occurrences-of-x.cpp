//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        vector<int> vect;
        int first=0;
        for(int i=0; i<n; i++){
            if(arr[i]==x) {
                first=i;
                break;
            }
        }
        int last=0;
        for(int i=n-1; i>first; i--){
            if(arr[i]==x){
                last=i;
                break;
            }
        }
        if(last==0 and first!=0) last=first;
        if(first==0 and last==0){
            first=-1;
            last=-1;
        }
        vect.push_back(first);
        vect.push_back(last);
        return vect;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends