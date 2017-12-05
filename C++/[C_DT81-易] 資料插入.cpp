#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int sequence[n+1]= {0};
  for(int i=0; i<=n; i++)
  {
    cin >> sequence[i]; //將所有塞入sequence這個陣列中
  }

  sort(sequence,sequence+(n+1));//sort(陣列名,陣列名 + (從前方數來須排列的數量) ) ， 注意與vector的sort使用方法不同

  for(int i=0; i<=n; i++)
  {
    cout << sequence[i] << endl;
  }
  return 0;
}
