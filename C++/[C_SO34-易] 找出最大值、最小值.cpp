#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

  int n; //count

  cin >> n;

  int a[n];

  for(int i=0; i<n; i++)
    cin >> a[i];

  int max = a[0];
  int min = a[0];

  for(int i=0; i<n; i++)
  {
    if(a[i]>max)
      max = a[i];
    else if(a[i]<min)
      min = a[i];
  }

  printf("%0.2f\n%0.2f\n", (float)max, (float)min);

  return 0;
}
