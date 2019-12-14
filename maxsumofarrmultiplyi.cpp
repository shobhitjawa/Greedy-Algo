#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
void maximise(int a[],int n)
{                                       
	int sum=0;
	sort(a,a+n);
	for(int i=0;i<n;i++)               //maximise the sum of arr[i]*i
	{                                        //complexity-O(n).
		sum=sum+(a[i]*i);
	}
	cout<<sum;
}
int main()
{
	int a[]={3,5,6,1};
	int n=4;
	maximise(a,n);
	return 0;
}
