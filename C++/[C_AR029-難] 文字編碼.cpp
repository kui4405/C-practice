#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
  int i, j = 0;

  int l, n;
  float m;

  char s[255]={'\0'};

  cin.get(s, 255);

  l = (unsigned)strlen(s);
  m = sqrt(l);
  n = (int)m;
  if(n!=m)
    n++;

  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      cout << s[n*j+i];

  cout << "" << endl;

  return 0;
}
