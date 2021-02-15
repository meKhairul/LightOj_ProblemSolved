/*http://lightoj.com/volume_showproblem.php?problem=1113*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cout << "Case " << i << ":\n";
        stack <string> backwards;
        stack <string> forwards;
        backwards.push("http://www.lightoj.com/");
        //forwards.push("http://www.lightoj.com/");
        string current,input;
        while(1)
        {
            cin>>input;
            if(input[0]=='Q')
            {
                break;
            }
            else if(input[0]=='V')
            {
                cin>>current;
                cout << current << "\n";
                backwards.push(current);
                while(!forwards.empty())
                {
                    forwards.pop();
                }
            }
            else if(input[0]=='B')
            {
                if(backwards.size()==1 || backwards.empty())
                {
                    cout << "Ignored\n";
                }
                else
                {
                    current=backwards.top();
                 backwards.pop();
                 cout<<backwards.top()<<endl;
                 forwards.push(current);

                }
            }
            else
            {
                if(forwards.empty())
                {
                    cout << "Ignored\n";
                }
                else
                {
                    backwards.push(forwards.top());

                    cout<<forwards.top()<<endl;
                    forwards.pop();


                }
            }
        }

    }
    return 0;
}
