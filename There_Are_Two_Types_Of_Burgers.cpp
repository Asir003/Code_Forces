#include <bits/stdc++.h>
using namespace std;
#define FLI(i,a,b) for (int i = a; i < b; i++)
#define FLJ(j,c,d) for (int j = c; j < d; j++)

int find(int b,int p,int f,int h,int c)
{
    int sum=0;
    int sum1=0;
    int min=0;
    if((p+f)*2 <= b)
    {
        return (p*h)+(f*c);
    }
    else
    {   if(h<c)
       {
            int z=b/2;
            if(z<f)
            {
                min=z;//sum=(z*c);
            }
            else
            {
            min=f;//sum=(f*c);
            }
            sum=(min*c);
            int l=(b-(min*2));
            sum1=(l/2)*h;
            int total=sum+sum1;
            if(total > 0)
            {
                return total;
            }
            else
            {
                return 0;
            }
       }  
       else
       {

         int z=b/2;
            if(z<p)
            {
                min=z;//sum=(z*c);
            }
            else
            {
            min=p;//sum=(f*c);
            }
            sum=(min*h);
            int l=(b-(min*2));
            sum1=(l/2)*c;
            int total=sum+sum1;
            if(total > 0)
            {
                return total;
            }
            else
            {
                return 0;
            }
       }
        
    }
    
}
int main()
{
    int n,b,p,f,h,c;
    cin>>n;
    int arr[n];
    FLI(i,0,n)
    {
       cin>>b>>p>>f>>h>>c;
       arr[i]=find(b,p,f,h,c);
    }
    FLI(i,0,n)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}