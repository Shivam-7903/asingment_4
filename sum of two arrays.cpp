#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n,m,sum=0,p=1,sum1=0,q=1;
    cin>>n>>m;
    int a,b;
    for(int i=0;i<n;i++)
    {
        cin >> a;
        sum = sum*10 + a;
    }
    for(int j=0;j<m;j++)
    {
        cin >> b;
        sum1 = sum1*10 + b;
    }

    cout<<sum+sum1;
}
