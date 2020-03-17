/*http://lightoj.com/volume_showproblem.php?problem=1008*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,n,sq1,sq2,x,y;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        sq1 = ceil(sqrt(n));
        sq2 = (sq1-1)*(sq1-1) + 1;
        if(sq1%2==1)
        {
            if((sq1*sq1)-n < sq1)
            {
                y=sq1;
                x=(sq1*sq1);
                x-=n;
                x++;
            }
            else
            {
                x=sq1;
                y=(n-sq2+1);
            }

        }
        else
        {
           if((sq1*sq1)-n < sq1)
            {
                x=sq1;
                y=(sq1*sq1);
                y-=n;
                y++;
            }
            else
            {
                y=sq1;
                x=(n-sq2+1);
            }
        }
        cout << "Case " << i << ": " << x << " " << y << "\n";
    }
}
