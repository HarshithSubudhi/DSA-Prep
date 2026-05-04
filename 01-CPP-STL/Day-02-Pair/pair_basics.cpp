#include <bits/stdc++.h>
using namespace std;

int main() {
    // Create Pair
    pair<int, int> p = {10, 20};
    cout << p.first << " " << p.second << endl;

    // Create Vector of Pairs
    vector<pair<int, int>> v;

    v.push_back({1, 2});
    v.push_back({3, 1});
    v.push_back({2, 5});

    // Traversal
    for (auto x : v) {
        cout << x.first << " " << x.second << endl;
    }

    // Sorting
    sort(v.begin(), v.end());

    return 0;
}