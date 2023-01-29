#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(void)
{
    string z;
    cin >> z;

    string b;
    cin >> b;

    for(int i = 0, j = 0; i < z.size(); i++)
        if(z.at(i) == 'x')
            cout << b.at(j++);
        else
            cout << z.at(i);

    return 0;
}
