#include<iostream>

using namespace std;

int main()
{
    int n,m,max=0,max_row=0,k;
    cin>>n>>m;
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
     int count= 0;
     k=0;
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==1)
            {
                count+=1;
                k=i;
            }
        }
        if(max<count)
        {
            max=count;
            max_row =i;
        }
    }
    cout<<max_row<<" "<<max;
    
    
}
