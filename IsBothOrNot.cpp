#include <iostream>
#include <string>
using namespace std;

int main()
{
    // your code goes here
    int n;
    cin >> n;
    string result = "";
    if (n % 5 == 0 and n % 11 == 0)
    {
        result += "BOTH";
    }
    else if (n % 5 == 0 || n % 11 == 0)
    {
        result += "ONE";
    }
    if (result == "")
    {
        cout << "NONE" << endl;
    }
    else
    {
        cout << result << endl;
    }
    return 0;
}