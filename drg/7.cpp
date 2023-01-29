#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(void)
{
    string s;
    cin >> s;

    int r(-1);
    int br(0);
    for(int i = 0; i < s.length(); i++)
    {
        for(int j = 0; j < s.length(); j++)
            if(s.at(i) == s.at(j) && i != j)
                br++;
        if(br == 0)
        {
            r = i;
            break;
        }
        br = 0;
    }
    cout << r;

    return 0;
}
