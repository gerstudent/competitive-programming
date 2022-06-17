/*
    Created by gerstudent
*/

#include <iostream>
using namespace std;

const int MAXN = 10000500;
const int MAXV = 1000000500;
long long n, num, summ = 0, ans = -MAXV;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        summ = summ + num;
        if (summ > ans) {
            ans = summ;
        }
        if (summ < 0) {
            summ = 0;
        }
    }
    cout << ans << "\n";
    return 0;
}