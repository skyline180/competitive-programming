#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    int Q;
    cin >> Q;

    string S;
    stack<pair<int, string>> history;
    vector<char> output;

    for (int i = 0; i < Q; ++i) {
        int t;
        cin >> t;

        if (t == 1) {
            string W;
            cin >> W;
            history.push({1, W});
            S += W;
        } else if (t == 2) {
            int k;
            cin >> k;
            string deleted = S.substr(S.size() - k, k);
            history.push({2, deleted});
            S.erase(S.size() - k, k);
        } else if (t == 3) {
            int k;
            cin >> k;
            output.push_back(S[k - 1]);
        } else if (t == 4) {
            if (!history.empty()) {
                auto lastOp = history.top();
                history.pop();
                if (lastOp.first == 1) {
                    S.erase(S.size() - lastOp.second.size(), lastOp.second.size());
                } else if (lastOp.first == 2) {
                    S += lastOp.second;
                }
            }
        }
    }

    for (char c : output) {
        cout << c << endl;
    }

    return 0;
}
