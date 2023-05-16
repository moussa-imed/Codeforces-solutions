#include <bits/stdc++.h>
#include <iostream>
 
#define endl '\n'
#define f(i,s,k) for(ll i=s;i<k;i++)
#define f1(i,n,s) for(ll i=n;i>=s;i--)
#define pb push_back
#define fi first
#define se second
 
typedef long long  ll;
 
const ll INF = 4e9+5;
const int N =1e6+100;
const ll MOD = 1e9+7 ;
const double Pi=acos(-1);
 
 
using namespace std;
 
vector<vector<ll>> tree;
vector<vector<ll>> depth_vertex;
vector<ll> depth;
vector<ll> vis;
vector<ll> parent;
 
void dfs(ll v , ll p=-1,ll cnt=0){
    if(vis[v]) return ;
    depth[v]=cnt;
    parent[v]=p;
    vis[v]=1;
    depth_vertex[cnt].pb(v);
 
 
    for(ll u:tree[v]){
        if(u==v) continue;
        dfs(u,v,cnt+1);
    }
}
 
 
 
 
void solve(){
    
    
    ll n , root=1;
    ll k, cost;
    cin >> n >> k >> cost ;
 
    tree.clear();
    tree.resize(n+2);
    vis.clear();
    vis.resize(n+2);
    depth_vertex.clear();
    depth_vertex.resize(n+2);
    depth.clear();
    depth.resize(n+2);
    parent.clear();
    parent.resize(n+2);
 
    ll u , v;
 
    f(i,0,n-1){
        cin >> u >> v ;
        tree[u].pb(v);
        tree[v].pb(u);
    }
    dfs(root);
 
    
    vector<pair<pair<ll,ll>,pair<ll,ll>>> down(n+2);
 
    f1(tin,n,0){
        for(ll v:depth_vertex[tin]){
            for(ll u : tree[v]){
                if(u==parent[v]) continue;
                if(down[u].first.first+1>down[v].first.first){
                    down[v].first.first=down[u].first.first+1;
                    down[v].first.second=u;
                }
            }
            for(ll u : tree[v]){
                if(u==parent[v] || u==down[v].first.second) continue;
                if(down[u].first.first+1>down[v].second.first){
                    down[v].second.first=down[u].first.first+1;
                }
            }
 
        }
    }
 
    vector<ll> up(n+2,0);
    f(tin,1,n+1){
        for(ll v : depth_vertex[tin]){
            ll p = parent[v];
            up[v] = up[p] + 1;
            if (down[p].first.second == v) {
                up[v] = max(up[v], down[p].second.first + 1);
            } else {
                up[v] = max(up[v], down[p].first.first + 1);
            }
        }
    }
    ll ans=-1e12;
    for (ll v = 1; v <= n; ++v) {
        ans = max(ans, k * max(up[v], down[v].first.first) - cost*(depth[v]));
    }
 
    cout << ans << endl;
 
    
}
   
 
 
 
 
 
int main(){
 
    
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int qt=1;
    
 
    cin >> qt ;
 
    while(qt--){
        //cout << "ahla" << endl;
        solve();
    }
    return 0;
}
 
/*
int x ,cnt=0,x1;
    cin >> x ;
    x1=x;
    while(x1){
        cnt++;
        x1/=10;
    }
    cout << x-pow(10,cnt-1) << endl;
*/