#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(void)
{
    string s;
    cin >> s;

    reverse(s.begin(), s.end());
    for(int i = s.size()-1; i > 0; i--)
        if(i % 3 == 0)
            s.insert(i, ".");
    reverse(s.begin(), s.end());

    cout << s;

    return 0;
}
