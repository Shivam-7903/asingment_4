#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int count=0, total=n*n,sr=0,sc=0,er=n,ec=n,b[n][n];
    while(count<total)
    {
        for(int i=sc;i<ec&&count<total;i++)
        {
            b[sr][i]=a[sr][i];
            count++;
        }
        sr++;
        for(int i=sr;i<er&&count<total;i++)
        {
            b[i][ec]=a[i][ec];
            count++;
        }
        ec--;
        for(int i=ec;i>=sc&&count<total;i++)
        {
            b[er][i]=a[er][i];
            count++;
        }
        er--;
        for(int i=er;i>=sr;i++)
        {
            b[i][sc]=a[i][sc];
            count++;
        }
        sc++;
    }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<b[i][j];
            }
            
        }
}
