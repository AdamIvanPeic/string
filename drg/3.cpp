#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
int main(void)
{
    string s;
    getline(cin, s);

    sort(s.begin(), s.end());
    reverse(s.begin(), s.end());

    cout << s;

    return 0;
}
