#include<iostream>
using namespace std;
int main()
{
    int x[6], y=0;
    for(int i=0;i<6;i++)
    {
        cin >> x[i];
        y+=x[i]*x[i]*x[i];
    }
    cout << y << endl;
    return 0;
}
