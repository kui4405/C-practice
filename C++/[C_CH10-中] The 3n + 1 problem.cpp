#include <iostream>
using namespace std;
int f(int n){
  int cnt=1;
  while(n!=1){
    if(n%2==1)
      n=n*3+1;
    else
      n=n/2;
    cnt++;
  }
  return cnt;
}
int main(){
  int a, b;
  while(cin >> a >> b)
  {
    cout << a << " " << b << " ";

    if (a>b)
    {
      int temp = a;
      a = b;
      b =temp;
    }

    int max =0;

    for (int i=a; i<b+1; i++)
    {
      if(f(i)>max)
        max = f(i);
    }
    cout << max << endl;
  }
   return 0;
  }
