#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(void)
{
    string s;
    getline(cin, s);

    string f;
    string se;
    cin >> f;
    cin >> se;

    string s1 = f + ' ' + se + ' ';
    int ind = s.find(s1) + s1.size();
    int i = s.find(' ', ind)-ind;

    while(s.find(s1) != string::npos)
    {
        i = s.find(' ', ind)-ind;

        cout << s.substr(ind, i) << endl;

        s.erase(s.find(s1), s1.size());
        ind = s.find(s1) + s1.size();
    }

    return 0;
}
