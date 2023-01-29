#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(void)
{
    string s, r, t;
    cin >> s >> r;
    int br(0);
    while(br == 0)
    {
        int i = s.find(r);

        if(i!=string::npos)
            s.erase(s.begin()+i, s.begin()+i+r.size());
        if(t.size() == s.size())
            break;
        t = s;
        cout << s << endl;
    }
    return 0;
}
