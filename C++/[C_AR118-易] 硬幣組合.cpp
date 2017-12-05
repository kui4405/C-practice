#include <iostream>
#include <algorithm>

using namespace std;

int rmDup(int a[], int size)
{
  int prev = 0;
  for(int i=0;i<size;++i)
  {
    if (a[i]!= a[prev])
      a[++prev]=a[i];
  }
  int count = prev +1;
  return count;
}
int main(void)
{

  int a[10], b[10] = {0};

  for(int i=0; i<10; i++)
    cin >> a[i];

  for(int i=0; i<10; i++)
    cin >> b[i];

  int c[100];

  for(int i=0; i<10; i++)
    for(int j=0; j<10; j++)
      c[i*10+j] = a[i]+b[j];

  sort(c,c+(100));

  int cnt = rmDup(c,100);

  for(int i=0; i<cnt; i++)
  {
    if(i%10==0&&i!=0)
      cout << endl;
    if(i%10!=0)
      cout << " ";
    cout << c[i];
  }
  cout << endl;
}
