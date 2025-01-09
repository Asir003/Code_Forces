#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)
 
int main()
{
	int n,k,set,x;
	cin>>n>>k;
	int sum=0;
	int arr[k]={0};
	FLI(i,0,n)
	{
		int a;
		cin>>a;
		arr[a-1]++;
	}
	//sort(arr,arr+1);
    set=(n+1)/2;
	FLI(i,0,k)
	{
		x=arr[i]/2;
		sum=sum+(x*2);
		set=set-x;
		
	}
	
		sum=sum+set;
	cout<<sum<<endl;
	return 0;
}