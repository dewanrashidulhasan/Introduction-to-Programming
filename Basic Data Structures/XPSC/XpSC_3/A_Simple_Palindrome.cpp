#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    string vowels = "aeiou";

    while (t--) {
        int n;
        cin >> n;

        string ans = "";
        for (int i = 0; i < n; i++) {
            ans += vowels[i % 5];
        }
        sort(ans.begin(),ans.end());
        cout << ans << endl;
    }

    return 0;
}
https://docs.google.com/document/d/1hEApUFfN9GsjZlXQ4k4vFCHbkR8ABfK5tRHV_yWL-lU/edit?tab=t.0