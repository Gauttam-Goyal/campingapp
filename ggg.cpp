#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        vector<int>v;
        vector<int>vis(n,0);
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(v.size()==0)
            {
                v.push_back(arr[i]);
                vis[i]=1;
            }
            else
            {
                if(flag==0)
                {
                    if(arr[i]>=v[v.size()-1])
                    {
                        vis[i]=1;
                        v.push_back(arr[i]);
                    }
                    else
                    {
                        if(arr[i]<=arr[0])
                        {
                            flag=1;
                            v.push_back(arr[i]);
                            vis[i]=1;
                        }
                        else
                        {
                            vis[i]=0;
                        }
                    }
                }
                else
                {
                    if(arr[i]>=v[v.size()-1] && arr[i]<=arr[0])
                    {
                        v.push_back(arr[i]);
                        vis[i]=1;
                    }
                    else
                    {
                        vis[i]=0;
                    }
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<vis[i];
        }
        cout<<'\n';
    }
}