#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const long double EPS = 1e-7;

long double f(long double n, long double arr[], long double size) {
    long double cnt = 0.0;
    for (int i = 0; i < size; i++) {
        cnt += arr[i] * pow(n, i);
    }
    return cnt;
}


int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int n;
    cin >> n;
    long double arr[n + 1];
    for (int i = 0; i < n + 1; i++) {
        cin >> arr[i];
    }
    long double l = -1e9;    
    long double r = 1e9;    
    for (int i = 0; i < 100; i++) {
        long double mid = (l + r) / 2;
        if (f(mid, arr, n) < 0.0) {
            l = mid;
        } else {
            r = mid;
        }
    }
    cout << fixed << setprecision(16) << (l + r) / 2.0;
    return 0;
}