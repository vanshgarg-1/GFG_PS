//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      int ans = 0;
      int mini = *min_element(arr,arr+N);
      unordered_map<int,int>mp;
      for(int i=0; i<N; i++){
          mp[arr[i]]++;
      }
      int maxi = *max_element(arr,arr+N);
      int temp = 0;
      for(int i=mini; i<=maxi; i++){
          if(mp.find(i)!=mp.end()){
              temp++;
              ans = max(ans,temp);
          }
          else{
              temp=0;
          }
       }
       return ans;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends