#include<iostream>

using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        if(n % 4 == 0)
        {
            if(n % 400 == 0)
                cout << "Bissextile Year";
            else if(n % 100 == 0)
                cout << "Common Year";
        }
        else
            cout << "Common Year";
        cout << endl;
    }
    return 0;
}
