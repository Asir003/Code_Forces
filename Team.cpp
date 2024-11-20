#include <iostream>
using namespace std;
int main()
{
    int count,sum1=0;
    cin>>count;
    int arr[3];
    for(int k=0;k<count;k++)
    {
        int sum=0;
        for(int i=0;i<3;i++)
        {
            cin>>arr[i];
        }
        for(int j=0;j<3;j++)
        {
            if(arr[j]==1)
            {
                sum++;
            }
            else{
                continue;
            }
        }
        if(sum>=2)
        {
            sum1++;
        }
        else 
        {
            continue;
        }
    }    
    cout<<sum1<<endl;
    return 0;

}