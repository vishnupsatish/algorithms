#include <bits/stdc++.h>

#define int long long

using namespace std;

const int MAXN = 1e6 + 3, MOD = 1e9 + 7;

int n, pw[MAXN], hsh[MAXN], base = 137;
string s;

// One-indexed
int sub_hash(int l, int r) {
    return ((hsh[r] - hsh[l - 1] * pw[r - l + 1]) % MOD + MOD) % MOD;
}


signed main() {
    cin >> s;

    n = s.size();

    pw[0] = 1;

    for (int i = 1; i <= n; i++) {
        hsh[i] = (hsh[i - 1] * base + s[i - 1]) % MOD;
        pw[i] = (pw[i - 1] * base) % MOD;
    }

    return 0;
}
