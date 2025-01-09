#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int main()
{
    int n,k;
    cin>>n;
    vector <int> v;
    vector <int> even;
    vector <int> odd;
    int sum=0;
    FLI(i,0,n)
    {
        int a;
        cin>>a;
        if(a%2==0)
		{
			even.push_back(a);
		}
		else 
        {
			odd.push_back(a);
		}
    }
    int size_even=even.size();
    int size_odd=odd.size();
    int l=abs(size_even-size_odd);
    if(l<=1)
    {
        cout<<0<<endl;
		return 0;
    }
    else
    {
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        if(size_even>size_odd)
        {
            FLI(i,0,l-1)
            {
                sum+=even[i];
            }
        }
        else
        {
            FLI(i,0,l-1)
            {
                sum+=odd[i];
            }
        }
    cout<<sum<<endl;
    }
    
    return 0;


}