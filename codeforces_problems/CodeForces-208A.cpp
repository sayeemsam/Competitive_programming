#include<bits/stdc++.h>
using namespace std;
string song;
string ans;
int i;

int main()
{
    cin >> song;

    for(i=0; i<song.size(); i++)
    {
        if(song[i]=='W' && song[i+1]=='U' && song[i+2]=='B')
        {
            if(ans[ans.size()-1]!=' ')
            {
                if(ans[0]!=NULL)
                {
                  ans = ans + ' ';
                }

            }
            i++;
            i++;
            continue;
        }
        else
        {
            ans = ans + song[i];
        }

    }

    cout << ans;


    return 0;
}
