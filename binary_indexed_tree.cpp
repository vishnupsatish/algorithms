#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 5;

long long bit[MAXN+2];

long long sum(int i, long long (&arr)[MAXN+2]) {
    long long ret = 0;
    while (i > 0) {
        ret += arr[i];
        i -= (i & -i); // Flip the last set bit
    }
    return ret;
}

void change(int i, long long add, long long (&arr)[MAXN+2], int end) {
    while (i <= end) {
        arr[i] += add;
        i += (i & -i);
    }
}


signed main() {
    for (int i = 1; i <= n; i++) {
        int par = i + (i & -i); // Add the last set bit to find parent of the current node
        if (par <= n) bit[par] += bit[i];
    }
}
