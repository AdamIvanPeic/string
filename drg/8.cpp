#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(void)
{
    string r;
    int i = 1;

    string rjesenje("");
    while(cin >> r)
    {
        if(r.at(0) == 'a' || r.at(0) == 'e' || r.at(0) == 'i' || r.at(0) == 'o' || r.at(0) == 'u' || r.at(0) == 'A' || r.at(0) == 'E' || r.at(0) == 'I' || r.at(0) == 'O' || r.at(0) == 'U')
            r.append("ma");
        else
        {
            r.append(1, r.at(0));
            r.erase(r.begin());
            r.append("ma");
        }
        r.append(i, 'a');
        i++;

        rjesenje += r + ' ';
    }

    rjesenje.pop_back();
    cout << rjesenje;

    return 0;
}
