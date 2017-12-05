#include <iostream>

using namespace std;

int main()
{
  int n;

  cin >> n;

  int p[n];

  for(int i=0; i<n; i++)
    cin >> p[i];

  for(int i=0; i<n-1; i++)
    for(int j=0; j<n-1; j++)
    {
      if(p[j]>p[j+1])
        swap(p[j], p[j+1]);
    }

  for(int i=0; i<n; i++)
    cout << p[i] << endl;

  return 0;

}

void swap(int *a, int *b)
{
  if(*a != *b)
  {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
  }
}
