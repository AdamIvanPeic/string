#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(void)
{
    string s;
    cin >> s;
    char t;
    cin >> t;
    int p;
    for(int i = 0; i < s.size(); i += p)
    {
        p = s.find(t, i);
        if(p == s.size()-1 || s.at(p+1) == t || s.at(p+1) > t)
        {
            s.erase(s.begin()+p);
            cout << s;
            return 0;
        }
    }

    p = s.find(t);
    s.erase(s.begin()+p);
    cout << s;

    return 0;
}
