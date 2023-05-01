#include <bits/stdc++.h>
#include <iostream>
 
#define endl '\n'
#define f(i,s,k) for(ll i=s;i<k;i++)
#define f1(i,n,s) for(ll i=n;i>=s;i--)
#define pb push_back
#define fi first
#define se second
 
typedef long long ll;
 
const ll INF = 4e9+5;
const int N =2e5+10;
const ll MOD = 1e9+7  ;
const double Pi=acos(-1);
 
 
using namespace std;
 
 
ll n , m ,a[1005],b[1005][1005];
set<pair<ll,ll>> o_set;
set<ll> s2;
 
void init(){
	f(i,0,1005){
		f(j,0,1005){
			b[i][j]=1e6+1;
		}
	}
}
 
 
 
void solve(){
	ll x,y,c,mx=0,mxi;
	init();
	set<ll> s ;
	cin >> n;
	f(i,0,n){
		cin >> a[i+1];
		if(a[i+1]>mx){
			mx=a[i+1];
			mxi=i+1;
		}
	}
 
	cin >> m ;
 
	f(i,0,m){
		cin >> x >>y >> c ;
		b[x][y]=min(b[x][y],c);
		s.insert(y);
	}
	
	
 
	if(m<n-1 || s.size()!=n-1){
		cout << -1 << endl ;
	}else{
		ll ans2=0;
 
 
		f(i,1,n+1){
			if(i!=mxi){
				ll u=1e6+2;
				f(j,1,n+1){
					//cout << i << " : " << j << endl;
					u=min(b[j][i],u );
				}
				//cout << u << endl;
				if(u==1e6+1) u=0;
					ans2+=u;
			}
		}
		cout << ans2 << endl;
 
	}
 
}
 
 
 
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
    //cin >> t ;
    while(t--){
    	//cout << "ahla" << endl;
        solve();
    }
    return 0;
}
 
