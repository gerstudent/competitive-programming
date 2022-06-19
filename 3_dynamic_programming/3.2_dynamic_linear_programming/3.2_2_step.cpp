/*
    Created by gerstudent
*/

#include <iostream>
using namespace std;

const int MAXN = 10000500;
long long n, dp[MAXN], x;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
	cin >> n >> dp[1];
    dp[0] = 0;
    for (long long i = 2; i <= n; ++i) {
    	cin >> x;
        dp[i] = max(dp[i - 1], dp[i - 2]) + x;
    }
    cout << dp[n] << '\n';
    return 0;
}
