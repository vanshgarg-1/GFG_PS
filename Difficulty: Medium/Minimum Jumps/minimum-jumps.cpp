//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
       int minJumps(int arr[], int n){
        // Your code here
        int jumps=0,maxrange=0,maxi=0;
        if(n<=1)return 0;
        if(arr[0]==0)return -1;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,i+arr[i]);
            if(i==maxrange)
            {
                maxrange=maxi;
                jumps++;
                if(maxrange>=n-1)return jumps;
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends