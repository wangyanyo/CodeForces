#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
typedef long long ll;
#define int ll
const int N = 2e5 + 5;

int n, x, a[N];
map<int, int> mp;
signed main() {
    int tt;
    cin >> tt;
    while(tt--) {
        mp.clear();
        cin >> n >> x;
        for(int i = 1; i <= n; ++i) {
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        int ans = 0;
        for(int i = 1; i <= n; ++i) {
            while(ans < a[i]) {
                if(mp[ans % x] > 0) {
                    mp[ans % x]--;
                    ans++;
                }
                else break;
            }

            if(ans == a[i]) ans++;
            else if(ans > a[i]) {
                mp[a[i] % x]++;
            }
            else break;
         }

         while(1) {
             if(mp[ans % x] > 0) {
                 mp[ans % x]--;
                 ans++;
             }
             else break;
         }

         cout << ans << endl;
    }
}
