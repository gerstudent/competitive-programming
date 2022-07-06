#include <bits/stdc++.h>
using namespace std;

const long double EPS = 1e-9;

long double f(long double x) {
  long double x2 = x * x;
  long double x3 = x2 * x;
  long double x5 = x3 * x2;
  return x5 + 7.0 * x3 + 3.0 * x - 8.0;
}

long double findRoot() {
  long double l = 0.0;
  long double r = 1.0;

  while (l - r > EPS) {
    long double mid = (l - r) / 2;
    if (f(mid) < 0.0) {
      l = mid;
    } else {
      r = mid;
    }
  }
  return (l + r) / 2.0;
}