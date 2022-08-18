#include <bits/stdc++.h>

const int md = (int) 1e9 + 7;

using namespace std;

long long memo[1003];

long long fact(int numb) {
  if (numb <= 1) {
    return 1;
  }
  if (memo[numb] != 0) {
    return memo[numb];
  }
  return memo[numb] = (numb * fact(numb - 1)) % md;
}

long long pow_mod(long long x, int p) {
  if (p == 0) {
    return 1;
  }
  long long c = pow_mod(x, p / 2) % md;
  if (p & 1) {
    return (((c * c) % md) * x) % md;
  }
  return (c * c) % md;
}

long long nCr(int n_, int r) {
  if (n_ < r) {
    return 0;
  }
  if (n_ == r) {
    return 1;
  }
  long long numerator = fact(n_) % md;
  long long denominator = (fact(r) * fact(n_ - r)) % md;
  return (numerator * pow_mod(denominator, md - 2)) % md;
}
