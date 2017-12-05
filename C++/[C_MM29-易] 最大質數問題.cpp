#include <iostream>
#define MAX 10001
using namespace std;
void init(int p[])
{
  p[0]=false;
  p[1]=true;

  for(int i=2; i<MAX; i++)
    p[i]=true;
  for(int i=2; i<MAX; i++)
    if(p[i])
      for(int j=i*2; j<MAX; j+=i)
        p[j]=false;
}

int main()
{
  int p[MAX];
  init(p);

  int n;
  while(cin >> n)
  {
    for(int i=n-1; i>-1; i--)
      if(p[i])
      {
        cout << i << endl;
        break;
      }
  }
  return 0;
}

