#include <iostream>

using namespace std;

int main()
{
  int n, a = 0, b = 1, c = 1;

  cin >> n;

  if(n < 3)
    c = 1;
  else
    for (int i = 3; i<=n; i++)
    {
      a = b;
      b = c;
      c = a + b;
    }

  cout << c << endl;

  return 0;
}
