#include<iostream>

#define MAX 16

using namespace std;

int main()
{
  long long dp[MAX][MAX] = { 0 };
  for(int i = 0; i < MAX; i++)
    dp[15][i] = 1;
  for(int i = 1; i < MAX; i++)
    for(int j = i; j < MAX; j++)
    {
      //left
      dp[15 - i][j] += dp[15 - i][j - 1];
      //left down
      dp[15 - i][j] += dp[MAX - i][j - 1];
      //down
      dp[15 - i][j] += dp[MAX - i][j];
    }

  int n;
  while(cin >> n)
    while(n--)
    {
      int m;
      cin >> m;
      cout << dp[15 - m][m] << endl;
    }
  return 0;
}
