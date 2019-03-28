#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)
#define reps(i,f,n) for(int i=(f);i<(n);i++)
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFF = 1e18;

const int MAX_N = 100010;
//Quick Find Weighted
class QuickFindWeighted{
    public:
        int i2g[MAX_N];//i2g[i] := 頂点iが所属するグループ
        vector<int> g2i[MAX_N];//g2i[g]:= グループgに所属する頂点番号
        void init(int n){
            for (int i = 0; i < n; ++i){
                i2g[i] = i;
                g2i[i].push_back(i);
            }
        }
        // 座標iaと座標ibは同じグループに所属しているか？
        bool issame(int ia, int ib){
            return i2g[ia] == i2g[ib];
        }
        // 座標iaの所属するグループと座標ibの所属するグループを1つにする(異なるグループに属するものに)
        void merge(int ia, int ib){
            if(issame(ia, ib)) return;
            //iaの所属するグループがibの所属するグループより小さくならないようにする(一般的マージテク)
            if(g2i[i2g[ia]].size() < g2i[i2g[ib]].size()){
                swap(ia, ib);
            }
            int ga = i2g[ia], gb = i2g[ib];//グループgbの方が要素数が少ない
            for(auto u : g2i[gb]){//uには頂点の番号はいる
                i2g[u] = ga;//グループの番号を更新
            }
            g2i[ga].insert(g2i[ga].end(), g2i[gb].begin(), g2i[gb].end());//つなげる
            g2i[gb].clear();
        }
};

int main(int argc, char const *argv[])
{
	ll n; int m; cin >> n >> m;
	vector<int> a(m), b(m);
	rep(i, m) cin >> a[i] >> b[i];
	rep(i, m) a[i]--, b[i]--;

	QuickFindWeighted uf;
	uf.init(n);

	ll ans = 0;
	vector<ll> memo;
	memo.push_back(n * (n - 1) / 2);

	for (int i = m - 1; i >= 1; --i) {
		if (!uf.issame(a[i], b[i])) {
			int va = uf.i2g[a[i]], vb = uf.i2g[b[i]];
			ll cnta = uf.g2i[va].size();
			ll cntb = uf.g2i[vb].size();
			// printf("%d %d\n", cnta, cntb);
			ans += cnta * cntb;
		}
		uf.merge(a[i], b[i]);
		memo.push_back(n * (n - 1) / 2 - ans);
	}
	reverse(memo.begin(), memo.end());
	for (auto u : memo) printf("%lld\n", u);
	return 0;
}