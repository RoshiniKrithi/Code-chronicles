#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        string S, Tguess;
        cin >> S >> Tguess;
        
        string M = "";
        for (int i = 0; i < 5; i++) {
            if (S[i] == Tguess[i])
                M += 'G';
            else
                M += 'B';
        }
        
        cout << M << endl;
    }
    return 0;
}
