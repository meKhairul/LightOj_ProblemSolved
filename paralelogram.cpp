#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a1,a2,b1,b2,c1,c2,d1,d2,area;
    double m1,m2;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
        m1=(a1+c1)/2.0;m2=(a2+c2)/2.0;
        d1=(2*m1)-b1;d2=(2*m2)-b2;
        m1=(a1*b2)+(b1*d2)+(d1*a2);
        m2=(a2*b1)+(b2*d1)+(d2*a1);
        area=max(m1,m2)-min(m1,m2);
        cout << "Case "<< i << ": " << d1 << " " << " " << d2 << " " << area << " \n";
    }

}
