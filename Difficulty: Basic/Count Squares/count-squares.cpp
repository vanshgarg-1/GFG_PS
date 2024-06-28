//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countSquares(int N) {
        
        // code here
        int cnt =0;
        
           for(int i=1;i<sqrt(N);i++)
           {
               if(int (sqrt(i))%1==0)
               {
                   cnt = cnt+1;
               }
               
               
           }
          return cnt;
         
    } 
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countSquares(N) << endl;
    }
    return 0;
}
// } Driver Code Ends