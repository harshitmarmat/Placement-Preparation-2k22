#include<bits/stdc++.h>
using namespace std;

int climbStairs(int n) {
	if(n<=1){
		return 1;
	}
	return climbStairs(n-1) + climbStairs(n-2);
}		

int helper(int n, int * dp){
	if(n<=1){
		return 1;
	}
	if(dp[n]!=-1){
		return dp[n];
	}
	return dp[n] = climbStairs(n-1) + climbStairs(n-2);
}

int climbStairs(int n) {
	int dp[n];
	memset(dp,-1,sizeof(dp));
	return helper(n,dp);
}
	
int climbStairs( int n){
	int * dp = new int[46];
	dp[0]=1;
	dp[1]=1;
	for ( int i=2;i<46; i++){
		dp[i] =dp[i-1]+dp[i-2];
	}
	return dp[n];
}



int main(){
	int n ;
	cin>>n;
	cout<<climbStairs(n);
}