#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<vector<int>> arrays(n);   // store n arrays

    // Read all arrays
    for (int i = 0; i < n; i++) {
        int size;
        cin >> size;
        arrays[i].resize(size);   // make inner vector of length = size
        for (int j = 0; j < size; j++) {
            cin >> arrays[i][j];
        }
    }

    // Answer queries
    for (int k = 0; k < q; k++) {
        int i, j;
        cin >> i >> j;
        cout << arrays[i][j] << endl;
    }

    return 0;
}
