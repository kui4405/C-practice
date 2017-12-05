#include <iostream>
using namespace std;

int f(int i, int j)
{
  if(j==0||i==j)
    return 1;
  return f(i-1,j-1)+f(i-1,j);
}

int main(void)
{

  int temp;
  while(cin >> temp)
  {
    int n = temp;
    for(int i=n; i>=0; i--)
    {
      for(int k=n-(i+1); k>=0; k--)
      {
        cout << " ";
      }

      for(int j=0; j<=i; j++)
      {
        if(j==i)
          cout << f(i,j) << endl;
        else
          cout << f(i,j) << " ";
      }
    }
  }
}





