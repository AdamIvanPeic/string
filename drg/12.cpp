#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(void)
{
    string z;
    string b;

    cin >> z;
    cin >> b;

    for(int i = 0; i < z.size(); )
    {
        if(z.at(i) == 'x')
            cout << b.at(i++);
        else
            cout << z.at(i);
    }
    return 0;
}
