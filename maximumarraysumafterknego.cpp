#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int sum(int a[],int n,int k)
{
		int min=99999;
		int index=-1;
	// cout<<min2<<endl;
  // int min=99999;
	for(int i=1 ;i<=k;i++)
	{
	
	for(int i=0;i<=n-1;i++)
	{                                                  //maximum array sum after k negotiations.
	                                            //complexity-O(n).
		if(a[i]<min)
		{
			min=a[i];
			index=i;
		}
   }
	if(min==0)
	break;
	a[index]=-a[index];
   }
     int sum1= 0; 
    for (int i=0; i<=n-1; i++) 
        sum1 += a[i]; 
    return sum1; 	
}
int main()
{
	int arr[]={9, 8, 8, 5};
	int n=4;
		int k=3;
	int b=sum(arr,n,k);
//	k=2;
   cout<<b;
	return 0;
}
