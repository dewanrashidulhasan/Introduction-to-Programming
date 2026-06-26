#include <bits/stdc++.h>
using namespace std;

void solve() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string A, B;
        cin >> A >> B;

        // যদি ইতিমধ্যে সমান হয়
        if (A == B) {
            cout << "Yes\n";
            continue;
        }

        // A-তে কোনো transition আছে কিনা চেক (uniform কিনা)
        bool has_transition = false;
        for (int i = 0; i < N-1; ++i) {
            if (A[i] != A[i+1]) {
                has_transition = true;
                break;
            }
        }

        // A uniform হলে B-ও uniform হতে হবে, কিন্তু A != B তাই No
        if (!has_transition) {
            cout << "No\n";
            continue;
        }

        // transition sequences তৈরি
        vector<char> trans_A, trans_B;
        for (int i = 0; i < N-1; ++i) {
            if (A[i] == '0' && A[i+1] == '1') trans_A.push_back('U');
            else if (A[i] == '1' && A[i+1] == '0') trans_A.push_back('D');
        }
        for (int i = 0; i < N-1; ++i) {
            if (B[i] == '0' && B[i+1] == '1') trans_B.push_back('U');
            else if (B[i] == '1' && B[i+1] == '0') trans_B.push_back('D');
        }

        // subsequence চেক
        int j = 0;
        for (int i = 0; i < (int)trans_A.size() && j < (int)trans_B.size(); ++i) {
            if (trans_A[i] == trans_B[j]) {
                ++j;
            }
        }

        if (j == (int)trans_B.size()) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}