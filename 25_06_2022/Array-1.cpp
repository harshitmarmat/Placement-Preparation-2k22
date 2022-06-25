// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution

{    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        vector<int> ans;
        long long current_sum = 0;
        for ( int LI = 0,SI=0 ;SI<=LI && LI<=n  ;){
        	if(current_sum==s){
        // 		cout<<SI<<" "<<LI<<endl;
        		ans.push_back(SI+1);
        		ans.push_back(LI);	
        		return ans;
        	}
        	else if(current_sum>s){
        	    current_sum-=arr[SI];
        		SI++;
        // 		cout<<SI<<" "<<current_sum<<endl;
        	}
        	else{
        	    current_sum+=arr[LI];
        		LI++;
        // 		cout<<current_sum<<" "<<LI<<endl;
        	}
        }
        ans.push_back(-1);
        return ans;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends