/*
    Created by gerstudent
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    unsigned int n;
	cin >> n;
	vector<unsigned int> dp(n + 1);
    dp[1] = 0;
	for (unsigned int i = 2; i <= n; ++i) {
		dp[i] = min(min(dp[i - 1], i % 2 == 0 ? dp[i / 2] : dp[i - 1]), i % 3 == 0 ? dp[i / 3] : dp[i - 1]) + 1;
	}
    cout << dp[n] << '\n';
    return 0;
}