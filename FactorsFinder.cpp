#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int n, count{0};
    cin >> n;
    vector<int> st;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
            st.push_back(i);
        }
    }
    cout << count << "\n";
    for (int i = 0; i < count; i++)
    {
        cout << st[i] << " ";
    }
    return 0;
}