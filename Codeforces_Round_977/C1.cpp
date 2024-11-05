#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
const int N = 2e5  + 5;

int n, m, q, a[N], b[N];
set<int> st;
signed main() {
    int tt;
    cin >> tt;
    while(tt--) {
        st.clear();
        cin >> n >> m >> q;
        for(int i = 1; i <= n; ++i) {
            cin >> a[i];
        }
        for(int i = 1; i <= m; ++i) {
            cin >> b[i];
        }
        st.insert(a[1]);
        int cnt = 1;
        bool ans = true;
        for(int i = 1; i <= m; ++i) {
            if(st.count(b[i])) {
                if(b[i] == a[cnt] && cnt < n) {
                    st.insert(a[++cnt]);
                }
            }
            else {
                ans = false;
                break;
            }
        }
        if(ans) cout << "YA" << endl;
        else cout << "TIDAK" << endl;
    }
}
