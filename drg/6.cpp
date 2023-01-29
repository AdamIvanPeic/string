#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(void)
{
    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i++)
        if(s.at(i) == 'D')
            s.at(i) = 'L';
        else if(s.at(i) == 'L')
            s.at(i) = 'D';

    cout << s;

    return 0;
}
