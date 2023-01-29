#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(void)
{
    string p, d;
    char z;
    cin >> p >> z >> d;

    if(z == '+')
    {
        if(p.size() > d.size())
            p.at(p.size()-d.size()) = '1';
        else if(p.size() < d.size())
            d.at(d.size()-p.size()) = '1';
        else
            p.at(0) = '2';
    }
    else if(z == '*')
        p.append(d.length()-1, '0');

    cout << p;

    return 0;
}
