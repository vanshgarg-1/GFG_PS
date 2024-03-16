//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
    
};

/* Function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


// } Driver Code Ends
/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:
    struct node *reverseIt (struct node *head, int k){ 
        // Complete this method
        vector<node*> vec;
        while(head){
            vec.push_back(head);
            head = head->next;
        }
        int n = vec.size();
        
        //reverse in group
        int count = 0;
        vector<int> temp;
        for (int i = 0; i < n; i++){
            temp.push_back(vec[i]->data);
            count++;
            if(count == k || i == n-1){
                reverse(temp.begin(), temp.end());
                for (int j = i - count + 1, l = 0; l < count; j++, l++) {
                    vec[j]->data = temp[l];
                }
                count = 0;
                temp.clear();
            }
        }
        for (int i = 0; i < n - 1; i++){
            vec[i]->next = vec[i + 1];
        }
        vec[n-1]->next = nullptr;
        return vec[0];
    }
};


//{ Driver Code Starts.

/* Drier program to test above function*/
int main(void)
{
    int t;
    cin>>t;
     
    while(t--)
    {
        struct node* head = NULL;
        struct node* temp = NULL;
        int n;
        cin >> n;
         
        for(int i=0 ; i<n ; i++)
        {
            int value;
            cin >> value;
            if(i == 0)
            {
                head = new node(value);
                temp = head;
            }
            else
            {
                temp->next = new node(value);
                temp = temp->next;
            }
        }
        
        int k;
        cin>>k;
        
        Solution ob;
        head = ob.reverseIt(head, k);
        printList(head);
    }
     
    return(0);
}


// } Driver Code Ends