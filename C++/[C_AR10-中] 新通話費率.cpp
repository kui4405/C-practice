#include <iostream>

using namespace std;

int main()
{
  const int m[4] = {186, 386, 586, 986};
  const float p[4] = {0.09, 0.08, 0.07, 0.06};
  const float o[4] = {0.8, 0.7, 0.6, 0.5};

  int a, b, s, i = 0 ;

  cin >> a;
  cin.get();
  cin >> b;
  cin.get();

  while(true)
  {
     if(a == m[i])
       break;
     i++;
  }

  s =(int)b*p[i];

  if((int)(b*p[i]+0.5)>s)
    s++;

  if(s>m[i])
  {
    s =(int)b*p[i]*o[i];

    if((int)(b*p[i]*o[i]+0.5)>s)
      s++;
  }

  cout << s << endl;

  return 0;

}
