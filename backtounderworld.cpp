/*http://lightoj.com/volume_showproblem.php?problem=1009*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,u,v;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        int color[20005]= {0};
        vector<int>adj[20005];
        for(int j=0; j<n; j++)
        {
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int m=0;
        for(int j=1; j<20005; j++)
        {
            if(!adj[j].empty()&&color[j]==0)
            {
                queue<int>q;
                int c1=0,c2=0;
                q.push(j);
                color[j]=1;
                c1++;
                while(!q.empty())
                {
                    int x = q.front();
                    q.pop();
                    for(vector<int>::iterator it = adj[x].begin(); it!=adj[x].end(); it++)
                    {
                        if(color[*it]==0)
                        {
                            q.push(*it);
                            if(color[x]==1)
                            {
                                color[*it]=-1;
                                c2++;
                            }
                            else
                            {
                                color[*it]=1;
                                c1++;
                            }
                        }
                    }

                }
                m+=max(c1,c2);
            }
        }
        cout<< "Case " << i+1 << ": " << m<<"\n";
    }
}
