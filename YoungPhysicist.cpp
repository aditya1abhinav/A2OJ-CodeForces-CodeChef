#include <iostream>
using namespace std;
int main()
{
    int t, a, b, c, xsum{0}, ysum{0}, zsum{0};
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        xsum += a;
        ysum += b;
        zsum += c;
    }
    if (xsum == 0 and ysum == 0 and zsum == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}