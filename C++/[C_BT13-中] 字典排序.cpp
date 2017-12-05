#include <iostream>
#include <cstring>
#include <string>

using namespace std;
void Permutations(char *a, const int k, const int m);

int main()
{

  int n;
  cin >> n;
  while(n--)
  {
    std::string s;
    cin >> s;

    char *sc = new char[s.length() + 1];

    std::strcpy(sc, s.c_str());

    Permutations(sc, 0, s.length());

    delete[] sc;
  }
}



void Permutations(char *a, const int k, const int m)
{
  // 產生a[k], …, a[m] 的所有排列
  if (k == m) //輸出排列
  {
    for (int i = 0; i <= m; i++) cout << a[i] ;
    cout << endl;
  }
  else // a [k : m] 還有超過一種以上的排列，遞迴產生它們
    for (int i = k; i <= m; i++)
    {
      swap(a[k], a[i]);
      Permutations(a, k + 1, m);
      swap(a[k], a[i]);
    }
}
