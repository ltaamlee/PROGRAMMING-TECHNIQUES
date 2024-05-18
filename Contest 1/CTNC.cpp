#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a > b) swap(a, b);
        if (b > c) swap(b, c);
        if (a > c) swap(a, c);
        cout << (a + b == c || a * b == c ? "Possible" : "Impossible") << '\n';
    }
}
