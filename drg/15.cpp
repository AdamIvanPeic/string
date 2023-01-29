#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(void)
{
    string s, e;
    getline(cin, s);

    int k, n;
    char f;

    cin >> k >> f;

    while(s.size() >= k)
    {
        cout << s.substr(0, k) << ' ';
        s.erase(0, k);
    }
    if(s.size() != 0)
    {
        n = k - s.size();
        for(int i = 0; i < n; i++)
            e += f;

        cout << s << e;
    }

    return 0;
}
