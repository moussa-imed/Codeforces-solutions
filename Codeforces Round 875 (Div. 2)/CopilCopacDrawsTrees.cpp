#include <bits/stdc++.h>
#include <iostream>
 
#define endl '\n'
#define f(i,s,k) for(ll i=s;i<k;i++)
#define f1(i,n,s) for(ll i=n;i>=s;i--)
#define pb push_back
#define fi first
#define se second
 
typedef int  ll;
 
 
const int N =2e5+100;
const ll MOD = 1e9+7 ;
const double Pi=acos(-1);
 
 
using namespace std;
 
 
 
ll mx=0;
 
ll dp[N], id[N];
vector<pair<ll,ll>> gr[N];
 
void dfs(int v){
    for(auto it : gr[v]){
        if(dp[it.first] == 0){
            dp[it.first] = dp[v] + (it.second <= id[v]);
            id[it.first] = it.second;
            dfs(it.first);
        }
    }
}
 
 
void solve(){
    
    
    ll n , u , k ;
    
 
    cin >> n ;
   
    for (int i = 0; i < n+1; ++i) {
        dp[i] = id[i] = 0, gr[i].clear();
    }
    
    f(i,1,n){
        cin >> u >> k ;
        
        gr[k].pb({u,i});
        gr[u].pb({k,i});
    }
 
    dp[1] = 1;
    dfs(1);
    int mx = 0;
    for(int i=1; i<=n; i++){
        mx=max(mx,dp[i]);
        //cout << dp[i] << endl;
    } 
    cout<<mx<<endl;
 
 
 
    
 
    
 
 
    
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
        
        solve();
    }
    return 0;
}
 