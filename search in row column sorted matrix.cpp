#include<iostream>

using namespace std;

int main()
{
    int n,m,x,count=0;;
    cin>>n>>m>>x;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(x==a[i][j])
            {
                cout<<1;
            }
            else count++;
        }
    }
    if(count==n*m)
    {
        cout<<0;
    }
}
