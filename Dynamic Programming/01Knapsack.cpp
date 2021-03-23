#include<bits/stdc++.h>
using namespace std;

/* 	
	Code written in C++
	Problem: 0-1 Knapsack DP
	Input: Two Array of Weight & Values of Available Content and Maximum Capacity of Bag
	Output: Maximum Profit 
	Author: Twinkle Sharma
*/

int dp[1002][1002];
    
int knapsack(int wt[],int val[], int W, int n)
{
	/*
	wt is the given weight array
	val is the value of profit on ith item
	W is the capacity of Knapsack(Bag)
	n is the total number of items 
	*/
	
	// Base Condition
	if(n==0 || W==0)
		return 0;
	
	
	if(dp[W][n]!=-1)
		return dp[W][n];

	//Choice Based Recursion
	if(W>=wt[n-1])
		return dp[W][n] = max(val[n-1]+knapsack(wt,val, W-wt[n-1], n-1), knapsack(wt, val, W, n-1));
	else
		return dp[W][n] = knapsack(wt,val,W,n-1);	
}
int main()
{
	int n,W;
	cout<<"Number of Items & Capacity of Bag\n";
	cin>>n>>W;
	
	int wt[n], val[n]; 	
	cout<<"Two Arrays Weights and Values\n";
	
	
	
	memset(dp,-1,sizeof(dp));
	for(int i=0;i<n;i++)
		cin>>wt[i];
	for(int i=0;i<n;i++)
		cin>>val[i];
	
	//Call Recursive Function 
	cout<<knapsack(wt, val, W, n);
	return 0;
}



