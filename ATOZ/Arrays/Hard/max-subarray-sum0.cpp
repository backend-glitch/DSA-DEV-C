#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<long long, int> mp;

    long long prefix = 0;
    int ans = 0;

    mp[0] = -1;

    for(int i = 0; i < n; i++) {

        prefix += arr[i];

        if(mp.count(prefix)) {
            ans = max(ans, i - mp[prefix]);
        }
        else {
            mp[prefix] = i;
        }
    }

    cout << ans << '\n';

    return 0;
}