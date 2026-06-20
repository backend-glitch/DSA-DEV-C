#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Fast I/O optimization
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

      
        for (int i : a) {
            if (i % 6 == 0) {
                cout << i << " ";
            }
        }

       
        for (int i : a) {
            if (i % 6 != 0 && i % 2 == 0) {
                cout << i << " ";
            }
        }

 
        for (int i : a) {
            if (i % 2 != 0 && i % 3 != 0) {
                cout << i << " ";
            }
        }

   
        for (int i : a) {
            if (i % 2 != 0 && i % 3 == 0) {
                cout << i << " ";
            }
        }
        
        cout << "\n"; 
    }
    return 0;
}
