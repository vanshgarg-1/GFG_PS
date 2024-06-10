//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
   bool find3Numbers(int A[], int n, int X)
{
    sort(A, A + n);
    int i = 0;
    while (i < n)
    {
        int diff = X - A[i];
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            int sum = A[j] + A[k];
            if (sum == diff)
            {
                return true;
            }
            else if (sum < diff)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
        i++;
    }
    return false;
}

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends