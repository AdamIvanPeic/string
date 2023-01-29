#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(void)
{
    string s, g;
    cin >> s;
    cin >> g;

    int n = s.size();
    for(int i = 0; i < n; i++)
    {
        string p;
        p.push_back(s.at(0));
        s.append(p);
        s.erase(s.begin());
        if(s.compare(g) == 0)
        {
            cout << "true";
            return 0;
        }
    }

    cout << "false";

    return 0;
}
