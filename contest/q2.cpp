#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    scanf("%d",&t);
    for(int k = 0 ; k<t ; k++)
    {
        int n ;
        scanf("%d",&n);
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int j=0;j<n;j++)
        {
            scanf("%d",&b[j]);
        }

        int x = a[0]-b[0];
        if(x<0)
        {
            cout<<"NO"<<endl;
            
        }
        else
        {
            int c = 0;
            for(int i=1 ; i<n;i++)
            {
                if(b[i] == 0 && a[i]-b[i] > x)
                {
                    c=0; 
                }
                else if( b[i]!= 0 && a[i]-b[i] != x)
                { 
                    c=0;    
                }
                else
                {
                    c++;
                }
            }
            if(c == n-1)
            {
                cout<<"YES"<<endl;     
            }
            else{
                cout<<"NO"<<endl;
            }
        }

        
    }
    return 0;
}