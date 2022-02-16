#include <bits/stdc++.h>

#define int long long

const int MOD = 1e9 + 7;

int memo[MAXN];

using namespace std;

int fact(int numb) {
    if (numb == 1) return 1;
    if (memo[numb] != 0) return memo[numb];
    return memo[numb] = (numb * fact(numb - 1)) % MOD;
}


int pow_mod(int x, int p) {
    if (p == 0) return 1;
    int c = pow_mod(x, p / 2) % MOD;
    if (p & 1) return (((c * c) % MOD) * x) % MOD;
    return (c * c) % MOD;
}


int choose(int n_, int r) {
    int numerator = fact(n_) % MOD;
    int denominator = (fact(r) * fact(n_ - r)) % MOD;
    return (numerator * pow_mod(denominator, MOD - 2)) % MOD;
}

