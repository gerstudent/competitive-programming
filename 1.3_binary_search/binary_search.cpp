#include <iostream>
using namespace std;

const int MAXN = 100500;
int n;
int a[MAXN];

int getFirstOne() {
    int l = -1, r = n;
    while (l + 1 < r) {
        int mid = (l + r) / 2;
        if (a[mid] == 0) {
            l = mid;
        } else {
            r = mid;
        }
    }
    return r;
}