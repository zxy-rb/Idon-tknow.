#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>
using namespace std;
#define ll long long
#define PII pair<int,int>
#define se second
#define fi first
void solve(){
    int N, M;
    cin >> N >> M;
    vector<vector<int>> map(N, vector<int>(M));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> map[i][j];
        }
    }
    int k;
    cin >> k;
    vector<vector<int>> map2(N, vector<int>(M,0));
    int total = N * M;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            int idx = (i * M + j + k) % total;
            int I = idx / M;
            int J = idx % M;
            map2[I][J] = map[i][j];
        }
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cout << map2[i][j] << " ";
        }
        cout << endl;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin>>t;
    while (t--){
        solve();
    }
    return 0;
}