#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(void)
{
    string s;
    char ch;
    cin >> s >> ch;

    int i = s.find(ch);
    reverse(s.begin(), s.begin()+i+1);

    cout << s;

    return 0;
}
