#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(void)
{
    string w1, w2, s;
    cin >> w1 >> w2;

    size_t i(0), j(0);
    for(; i < w1.length() && j < w2.length(); i++, j++)
    {
        s += w1.at(i);
        s += w2.at(j);
    }
    if(w1.length() > w2.length())
        s.append(w1, i, w1.length()-i);
    else if (w1.length() < w2.length())
        s.append(w2, j, w2.length()-j);

    cout << s;

    return 0;
}
