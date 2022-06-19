/*
    Created by gerstudent
*/

#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

long long mod = 1000000007;
vector<long long> dp;
string str;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int n;
    cin >> n;
    cin >> str;
    dp.assign(n + 3, 0);
    dp[2] = 1;
    for (int i = 0; i < n; ++i) {
    	if (str[i] != '1') {
            dp[i + 3] = (dp[i + 2] + dp[i + 1] + dp[i]) % mod;
    	}
    }

    cout << dp[n + 2] << '\n';
    return 0;
}