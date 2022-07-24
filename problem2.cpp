#include <bits/stdc++.h>

using namespace std;

int q, p, h;
long long hp;

int main()
{

    cin >> q;

    for (q; q>0; q--)
    {
        cin >> hp;
        cin >> p;
        cin >> h;

        // plasma effect
        for (p; p>0; p--)
        {
            hp = floor(hp/2)+10;
        }

        for (h; h>0; h--)
        {
            hp = hp - 10;
        }

        if (hp <= 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
