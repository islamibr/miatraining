#include <bits/stdc++.h>

using namespace std;

int q, str;
string s = "";
char c = '0';

int main()
{
    cin >> q;
    for (q; q>0; q--)
    {
        cin >> s;

        for(int i = 0; i < s.length(); i++)
        {
            if(s[i + 2] == '&')
            {
                str = ((int) s[i] - (int) c) * 10 + ((int) s[i + 1] - (int) c);
                cout << char(str + 96);
                i++;
            }
            else if (s[i] == '&'){
                continue;
            }
            else
            {
                str = ((int) s[i] - (int) c);
                cout << char(str + 96);
            }

        }
        cout << endl;

    }

    return 0;
}
