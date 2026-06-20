#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;


    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
        
        if (a[i] < 0 || a[i] >= n) {
            cout << "No";
            return 0;
        }
        
        
        if (b[a[i]] != i) {
            cout << "No";
            return 0;
        }
    }
    
    cout << "Yes";
    return 0;
}
