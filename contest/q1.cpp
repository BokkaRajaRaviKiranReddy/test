#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    scanf("%d",&t);
    while(t>0)
    {

        int n ;
        scanf("%d",&n);
        
        int a = (n-3)/3 ;
        int x = n-a;
        int b , c ;
        if(x%2 == 0)
        {
            b = (x/2)-1;
            c = (x/2)+1;
        }
        else
        {
            b = x/2;
            c = (x/2)+1;
            
        }

        cout << b <<" "<<c<<" "<<a<<endl;

        t--;
    }
    return 0 ;
}