#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1, 2, 3};

    // Iterator
    vector<int>::iterator it;

    for (it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }

    // Shortcut
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }

    // Reverse
    for (auto it = v.rbegin(); it != v.rend(); it++) {
        cout << *it << " ";
    }

    return 0;
}