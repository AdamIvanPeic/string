#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
int main(void)
{
    string s;
    char l;
    cin >> s;
    cin >> l;

    int br = count(s.begin(), s.end(), l);

    cout << ((br*100)/s.length());

    return 0;
}
