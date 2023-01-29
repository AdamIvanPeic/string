#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(void)
{
    string s;
    cin >> s;

    int t(1);
    int br = count(s.begin(), s.end(), '.');
    for(int j = 0; j < br; j++)
    {
        int i = s.find(".", t, 1);
        t = i+2;
        s.replace(s.begin() + i, s.begin()+i+1, "[.]");
    }

    cout << s;

    return 0;
}
