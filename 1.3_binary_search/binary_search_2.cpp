#include <iostream>
using namespace std;

const int MAXN = 100500;
int n;
int a[MAXN];

bool isNumberIn(int x) {
    int l = -1, r = n;

    // инвариант: a[l] < x <= a[r]
    // считаем, что a[-1] = -INF,
    // a[n] = INF
    while (l + 1 < r) {
        int mid = (l + r) / 2;
        if (a[mid] < x) {
            l = mid;
        } else {
            r = mid;
        }
    }
    return (r < n && a[r] == x);
}