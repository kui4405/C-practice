#include<iostream>

using namespace std;

int main()
{
	int coin[4] = { 1, 5, 10, 50 };
	int dp[501][4] = { 0 };
	for (int i = 0; i < 501; i++)
	{
		int temp = i;Q
		for (int j = 0; j < 4; j++)
		{
			dp[i][3 - j] += temp / coin[3 - j];
			temp %= coin[3 - j];
		}
	}

	//product price
	int p[2] = { 17, 25 };

	int k, m, n;
	while (cin >> k)
	{
		cin.get();
		cin >> m;
		cin.get();
		cin >> n;

		bool first = true;
		for (int i = 0; i < 4; i++)
		{
			if (dp[k - p[m - 1] * n][i] > 0)
			{
				if (!first)
					cout << ",";
				first = false;
				printf("Coin %d:", coin[i]);
				printf("%d", dp[k - p[m - 1] * n][i]);
			}
		}
		cout << endl;
	}
	return 0;
}
