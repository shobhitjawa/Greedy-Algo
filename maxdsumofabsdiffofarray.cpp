#include<stdio.h>
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
void star(int a[],int n)
{
	vector<int>v1;
	sort(a,a+n);
	for(int i=0;i<n/2;i++)
   {
   	v1.push_back(a[i]);
   	v1.push_back(a[n-i-1]);
   }
   int maxsum=0;
   for(int i=0;i<n-1;i++)
   {
   	maxsum=maxsum+abs(v1[i]-v1[i+1]);
   }
   maxsum=maxsum+abs(v1[n-1]-v1[0]);       //maximum sum of abs diff of array TimeComplexity -O(n)
   cout<<maxsum;
}
int main()
{
	int a[]={1,2,4,8};
	int n=4;
	star(a,n);
	return 0;
}

