#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    scanf("%d",&t);
    for(int a = 0 ; a<t ; a++)
    {
        int n ;
        scanf("%d",&n);
        int s[n];
        int f[n];
        for(int i = 0 ; i<n ; i++)
        {
            scanf("%d",&s[i]);
        }
        for(int i = 0 ; i<n ; i++)
        {
            scanf("%d",&f[i]);
        }
        
        int d[n];
        d[0] = f[0]-s[0];
        for(int k= 1 ; k < n ; k++)
        {
            if(s[k] >= f[k-1])
            {
                d[k] = f[k]-s[k];
            }
            else
            {
                d[k] = f[k]-f[k-1];
            }
        }
        for(int i=0 ; i<n ;i++)
        {
            cout<<d[i]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}