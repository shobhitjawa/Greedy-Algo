#include<stdio.h>
#include<iostream>
using namespace std;
void productmin(int a[],int n)
{
	int small=9999;
	int countzero=0;
	int countneg=0;
	int prod=1;
	int b[n];
	int j=0;
	int max=999;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]==0)
		countzero++;
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
		countneg++;
	}
	cout<<countneg<<endl;
	cout<<countzero<<endl;
   if(countzero==0&&countneg%2==0)
   {
   	for(int i=0;i<n-1;i++)
   	prod=prod*a[i];
   cout<<prod;
   }
   if(countzero==0&&countneg%2!=0)
   {
   	for(int i=0;i<n-1;i++)
   	{
   		if(a[i]<0)
   		{
   			b[j++]=a[i];
		   }
	   }
	   for(int i=0;i<j;i++)
	   {
	   	if(b[i]<max)
	   	{
	   		max=b[i];
		   }
	   }
	   cout<<max;
	   for(int i=0;i<n-1;i++)
	   {
	   	   if(a[i]!=max)
	   	   prod=prod*a[i];
	   }
	   cout<<prod;
   }                                           //maximum product subset of array
                                                   //complexity-O(n).
   if(countzero>=1&&countneg==0)
   {
   	for(int i=0;i<n-1;i++)
   	{
   		if(a[i]!=0)
   	     prod=prod*a[i];
	   }
	   cout<<prod;
   }
}
int main()
{
	int a[]={0,1,0,0,3,1};
	int n=6;
	 productmin(a,n);
	return 0;
}
