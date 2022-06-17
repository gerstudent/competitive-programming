/*
    Created by gerstudent
*/

#include <iostream>
using namespace std;

const int MAXN = 10000500;
const int MAXV = 1000000500;
int n;
int arr[MAXN];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int maxa = -MAXV, maxi = 1;
    for (int i = 0; i < n; ++i) {
        if (maxa < arr[i]) {
            maxi = i + 1;
            maxa = arr[i];
        }
    }

    cout << maxi << "\n";
    return 0;
}
