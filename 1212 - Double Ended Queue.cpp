/*http://lightoj.com/volume_showproblem.php?problem=1212*/
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t,n,m,x;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>m;
        string st;
        list <int> q;
        cout << "Case " << i+1 << ":\n";
        while(m--)
        {
            cin>>st;
            if(st[0]=='p'&&st[1]=='u')
            {
                cin>>x;
            }
            if(st=="pushLeft" )
            {
                if(q.size()==n)
                {
                    cout << "The queue is full\n";

                }
                else
                {
                    q.push_front(x);
                    cout << "Pushed in left: " << x << "\n" ;
                }

            }
            else if(st=="pushRight" )
            {
                if(q.size()==n)
                {
                    cout << "The queue is full\n";
                }
                else
                {
                    q.push_back(x);
                    cout << "Pushed in right: " << x << "\n" ;
                }

            }
            else if(st=="popRight")
            {
                if(q.empty())
                {
                    cout << "The queue is empty\n";

                }
                else
                {
                    cout << "Popped from right: " << q.back() << "\n";
                    q.pop_back();
                }

            }
            else if(st=="popLeft" )
            {
                if(q.empty())
                {
                    cout << "The queue is empty\n";

                }
                else
                {
                    cout << "Popped from left: " << q.front() << "\n";
                    q.pop_front();
                }

            }
        }
    }
    return 0;
}
