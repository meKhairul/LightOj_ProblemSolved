/*http://lightoj.com/volume_showproblem.php?problem=1010*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m,ans;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n>>m;
        if(n==1 || m==1)
        {
            ans = max(n,m);
        }
        else if(n==2 && m==2)
        {
            ans = 4;
        }
        else if(n==2 && m==3 || n==3 && m==2)
        {
            ans = 4;
        }
        else
        {
            ans = ((n*m)+1)/2;
        }
        cout << "Case "  << i << ": " << ans << endl;
    }
}
