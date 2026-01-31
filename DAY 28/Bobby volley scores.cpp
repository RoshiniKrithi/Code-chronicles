#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;

        int aliceScore = 0, bobScore = 0;
        char server = 'A'; // Alice starts

        for (char winner : S) {
            if (server == 'A') {
                if (winner == 'A') {
                    aliceScore++; // server wins
                } else {
                    server = 'B'; // receiver wins, becomes server
                }
            } else { // server == 'B'
                if (winner == 'B') {
                    bobScore++; // server wins
                } else {
                    server = 'A'; // receiver wins, becomes server
                }
            }
        }

        cout << aliceScore << " " << bobScore << endl;
    }
    return 0;
}
