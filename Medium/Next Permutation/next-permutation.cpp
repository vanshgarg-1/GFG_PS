//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
      vector<int> nextPermutation(int n, vector<int> arr)
    {
        //finding break point or finding longest matched priffix
        if(n==1) return arr;
        int index=-1;
        int maxi=n-1;
        for(int i=n-2;i>=0;i--) 
        {
            if(arr[maxi]>arr[i])
            {
                index=i;
                break;
            }
            maxi=i;
        }
        if(index==-1) reverse(arr.begin(),arr.end());
        else //swapping
        {
            for(int i=n-1;i>index;i--)
            {
                if(arr[i]>arr[index])
                {
                    swap(arr[i],arr[index]);
                    break;
                }
            }
             //reversing
            reverse(arr.begin()+index+1,arr.end());
        }
        return arr;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends