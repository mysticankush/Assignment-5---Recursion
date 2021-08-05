 /*  Program to print every third element of the fibonacci series
 * Compilation : gcc problem13.c
 * Execution : ./a.out
 *
 * Ankush Chhabra 1910990144 29/07/21
 * Assignment_5 -> Recursion
*/
#include<stdio.h>
int fibo[100005];
int ans[100005];
int sz=1;
int dp[100005];
//memoized function to find the fibonacci series as well its evey third element
int fib(int n)
{
	if(n==1 || n==2)
	return fibo[n]=1;
	if(dp[n]!=-1)
	return dp[n];
	fibo[n]=fib(n-1)+fib(n-2);
	//if n%3==0 then it means that element is the third element and we are storing that element in our answer array
	if(n%3==0)
	{
		ans[sz++]=fibo[n];
	}
	dp[n]=fibo[n];
	return fibo[n];
}
int main() {
    int n;
    //taking input the size of the fibonacci series
 	scanf("%d",&n);
 	for(int i=1;i<=n;i++)
 	dp[i]=-1;
 	fib(n);
 	//printing every third element of the fibonacci series
 	for(int i=1;i<sz;i++)
 	{
 	    printf("%d ",ans[i]);
 	}
}
