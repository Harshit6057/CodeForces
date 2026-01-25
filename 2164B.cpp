#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;   // number of test cases

    while (T--) {
        int n;
        cin >> n;   // size of array

        vector<int> temp(n);
        for (int i = 0; i < n; i++) {
            cin >> temp[i];
        }

        pair<int, int> ans = {-1, -1};

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (temp[i] < temp[j] && temp[j] % temp[i] == 0) {
                    ans = {temp[i], temp[j]};
                }
            }
        }

        if (ans.first == -1)
            cout << -1 << endl;
        else
            cout << ans.first << " " << ans.second << endl;
    }

    return 0;
}
