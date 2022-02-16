#include <bits/stdc++.h>

using namespace std;

struct node { node *ch[26]; };


void insert(string &s, node *root) {
    node *cur = root;
    for (int i = 0; i < s.length(); i++) {
        int c = s[i] - 'a';
        if (cur->ch[c] == nullptr) cur->ch[c] = new node();
        cur = cur->ch[c];
    }
}


int main() {
    node *ni = new node();
}
