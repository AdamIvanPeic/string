#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(void)
{
    string s;
    cin >> s;

    for(int i = 0; i < s.size()-1; i++)
        if(s.at(i) == s.at(i+1))
        {
            s.erase(i, 2);
            i = -1;
        }

    cout << s;

    return 0;
}
