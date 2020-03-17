/*http://lightoj.com/volume_showproblem.php?problem=1166*/

#include<bits/stdc++.h>
using namespace std;

int a[100];
int min_item(int n)
{
    int k,mins=1000000000,x;
    for(k=0;k<n;k++)
    {
        if(mins>a[k] )
        {
            mins = a[k];
            x=k;
        }
    }
    a[x]= 1000000000;
    return x;
}
int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {

        int u,count=0;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        cout << "Case " << i+1 << ": ";
        for(int q=0;q<n;q++)
        {
            u=min_item(n);
            if(u!=q)
            {
               swap(a[u],a[q]);
               count++;
            }
        }
        cout << count << endl;
    }

}
