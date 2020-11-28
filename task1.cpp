#include <iostream>

using namespace std;

int main() {    
    int n;
    cin >> n;

    int a[n], b[n];

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];


    int possible = 0;
    for (int l = 0; l < n; l++) {
        for (int r = l; r < n; r++) {
            int this_case_possible = 1;
            for (int p = 0; p < l; p++) {
                if (a[p] != b[p]) this_case_possible = 0;
            }
            for (int q = r+1; q < n; q++) {
                if (a[q] != b[q]) this_case_possible = 0;
            }

            for (int m = l; m <= r; m++) {
                if ((b[m] - a[m]) != (b[l] - a[l])) this_case_possible = 0;
            }

            if ((b[l] - a[l]) <= 0) this_case_possible = 0;

            if (this_case_possible) possible =1;
        }
    }

    if (possible) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
