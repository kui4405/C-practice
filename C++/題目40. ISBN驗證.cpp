#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int judgeNumber(string s)
{
    if(isdigit(s[0]))
        return s[0] - '0';
    else if(s[0] == 'X')
        return 10;
}

int main()
{
    string temp;
    while(cin >> temp)
    {
        //input
        int num[10];
        num[0] = judgeNumber(temp);

        for(int i = 1; i < 10; i ++)
        {
            cin >> temp;
            num[i] = judgeNumber(temp);
        }

        //first
        for(int i = 1; i < 10; i++)
            num[i] += num[i - 1];
        //second
        for(int i = 1; i < 10; i++)
            num[i] += num[i - 1];

        if(num[9] % 11 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
