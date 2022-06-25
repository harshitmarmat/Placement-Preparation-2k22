// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdbool.h>


 // } Driver Code Ends
//User function Template for C

// Function to find majority element in the array
// a: input array
// size: size of input array
int majorityElement(int a[], int size)
{
        
    // your code here
    a.sort(a,a+size);
    int max_count = 0, ans = 0,count=1,element=a[0];
    for ( int i=1 ; i<size ; i++){
        if(a[i]==element){
            count++;
            if(max_count<count){
                max_count = count;
                ans= element;
            }
        }
        else{
            count = 0;
            element = a[i];
        }
    }
    if(max_count>size/2){
        return ans;
    }
    return -1;
}

// { Driver Code Starts.

int main(){

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        
        for(int i = 0;i<n;i++){
            scanf("%d", &arr[i]);
        }
        printf("%d\n", majorityElement(arr, n));
    }

    return 0;
}
  // } Driver Code Ends