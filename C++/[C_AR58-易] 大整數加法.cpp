#include <iostream>

using namespace std;

int main(){
  int n;

  cin >> n;
  while(n--){

      string t;
      cin >> t;
      int x[30] = {0};
      for(int i=0;i<t.length();i++)
        x[30-1-i] = t[t.length()-1-i]-'0';

      cin >> t;
      int y[30] = {0};
      for(int i=0;i<t.length();i++)
        y[30-1-i] = t[t.length()-1-i]-'0';

      for(int i=30-1;i>-1;i--)
        x[i] += y[i];
      for(int i=30-1;i>0;i--){
        x[i-1] += x[i]/10;
        x[i] %= 10;
      }

      bool print = false;
      for(int i=0;i<30;i++){
        if(x[i]!=0)
          print = true;
        if(print)
          cout << x[i];
      }
      cout << endl;

  }
  return 0;
}
