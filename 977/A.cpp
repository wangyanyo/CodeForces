#include<iostream>
#include<algorithm>
using namespace std;
const int N = 55;

int n, a[N];
signed main() {
    int tt;
    cin >> tt;
    while(tt--) {
        cin >> n;
        for(int i = 1; i <= n; ++i) {
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        int ans = a[1];
        for(int i = 2; i <= n; ++i) {
            ans = (ans + a[i]) / 2;
        }
        cout << ans << endl;
    }
}
