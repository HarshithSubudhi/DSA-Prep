#include <bits/stdc++.h>
using namespace std;

int main() {
    // Creating vector
    vector<int> v = {5, 2, 9, 1, 3};

    // Adding element
    v.push_back(10);

    // Removing last element
    v.pop_back();

    // Size
    cout << "Size: " << v.size() << endl;

    // Traversal
    cout << "Elements: ";
    for (auto x : v) cout << x << " ";
    cout << endl;

    // Sorting
    sort(v.begin(), v.end());

    cout << "Sorted: ";
    for (auto x : v) cout << x << " ";
    cout << endl;

    // Reverse
    reverse(v.begin(), v.end());

    cout << "Reversed: ";
    for (auto x : v) cout << x << " ";
    cout << endl;

    // Find max element
    int mx = *max_element(v.begin(), v.end());
    cout << "Max: " << mx << endl;

    // Count even numbers
    int countEven = 0;
    for (auto x : v) {
        if (x % 2 == 0) countEven++;
    }
    cout << "Even count: " << countEven << endl;

    return 0;
}