//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
   int findLongestConseqSubseq(int arr[], int N) {
        unordered_set<int> uniqueNumbers;

        for (int i = 0; i < N; i++) {
            uniqueNumbers.insert(arr[i]);
        }

        int maxLength = 0;

        for (int i = 0; i < N; i++) {
            // If the current element is the start of a subsequence.
            if (uniqueNumbers.find(arr[i] - 1) == uniqueNumbers.end()) {
                int currentNum = arr[i];
                int currentLength = 1;

                // Increment the current number until no more consecutive numbers are found.
                while (uniqueNumbers.find(currentNum + 1) != uniqueNumbers.end()) {
                    currentNum++;
                    currentLength++;
                }

                maxLength = max(maxLength, currentLength);
            }
        }

        return maxLength;
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