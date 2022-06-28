#include<bits/stdc++.h>
using namespace std;

//brute force 

int fibbrute( int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	return fib(n-1)+fib(n-2);
}


//memoization 
int dp[1000];
memset(dp, -1 , sizeof(dp));

int fibmemo( int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	if(dp[n]!=-1){
		return dp[n];
	}
	return dp[n] = fib(n-1)+fib(n-2);
}


//iterative 
int fibIterative (int n){
	int * dp = new int [n+1];
	dp[0]=0;
	dp[1]=1;
	for(int i=2;i<=n ;i++){
		dp[i]= dp[i-1]+dp[i-2];
	}
	return dp[n];
}

//best approach 

int fibBest (int n){
	if(n==0){
		return 0;
	}
	int prev2 = 0;
	int prev = 1;
	for ( int i=2 ; i<=n ;i++){
		int current = prev + prev2;
		prev2 = prev;
		prev = current;
	}
	return prev;
}


int main (){
	int n ; 
	cin>> n;

	cout<<fib(n);
}