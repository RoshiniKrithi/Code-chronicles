#include <bits/stdc++.h>
using namespace std;

bool v(char c) {
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int c = 0;
        bool ok = false;
        for (char x : s) {
            if (v(x)) {
                c++;
                if (c >= 3) {
                    ok = true;
                    break;
                }
            } else {
                c = 0;
            }
        }

        cout << (ok ? "HAPPY" : "SAD") << "\n";
    }
}
