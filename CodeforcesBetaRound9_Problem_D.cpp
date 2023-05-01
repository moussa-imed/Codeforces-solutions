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
const int N =1e5+10;
const ll MOD = 1e9+7  ;
const double Pi=acos(-1);
 
 
using namespace std;
 
ll memo[50][50];
 
ll tree_dp(ll n , ll h){
    if(n==0 && h==0) return 1 ;
    else if(h==0) return 0;
    else if(n==0) return 0;
 
 
    ll &ans= memo[n][h];
    if(ans!=-1) return ans;
    ans=0;
    f(m,1,n+1){
        ll a=0,b=0;
        f(i,0,h){
            a+=tree_dp(n-m,i);
        }
 
        f(i,0,h-1){
            b+=tree_dp(m-1,i);
        }
 
        ans+=((tree_dp(m-1,h-1)*a)+(tree_dp(n-m,h-1)*b));
    }
    return ans;
}
 
void solve(){
    ll n , h ,ans=0;
    cin >> n >> h;
    memset(memo,-1,sizeof(memo));
    f(i,h,n+1){
        ans+=tree_dp(n,i);
 
    }
    cout << ans << endl;
 
 
 
}
 
 
 
int main(){
	
    cout<<setprecision(2)<<fixed;
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
   // cin >> t ;
    while(t--){
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