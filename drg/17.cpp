#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(void)
{
    string s;
    cin >> s;

    int k, br = 0;
    cin >> k;

    string r = "";
    for(int i = 0; i < s.size(); i++)
        r += to_string(s.at(i) - 'a'+1);

    for(int i = 0; i < k; i++)
    {
        br = 0;
        for(int j = 0; j < r.size(); j++)
            br += r.at(j) - '0';

        r = to_string(br);
    }
    cout << r;

    return 0;
}
