#include <bits/stdc++.h>
#include <iostream>
 
#define endl '\n'
#define f(i,s,k) for(ll i=s;i<k;i++)
#define f1(i,n,s) for(ll i=n;i>=s;i--)
#define pb push_back
#define fi first
#define se second
 
typedef unsigned long long  ll;
 
const ll INF = 4e9+5;
const int N =1e7+100;
const ll MOD = 1e9+7 ;
const double Pi=acos(-1);
 
 
using namespace std;
 

 
vector<ll> adj[200009];

unordered_map<ll,ll>map_;
 


void solve(){
    ll n,m,l=0,k=0,w,h,x,y,q=1,ans=0;
    string s,p="codeforces";
    cin>>n;
    cout<<map_[n]<<"\n";
    

    
}
   
 
 
 
 
 
int main(){
    
    cout<<setprecision(2)<<fixed;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
    
    cin >> t ;
    
    map_[1]=1;
    ll a[2000][2000]={0};
    ll cnt=1;
    a[0][0]=a[0][1]=a[1][0]=0;
    for(ll i=1;i<=1500;i++) {
        ll k=i,y=1;
        for(ll j=i;j>=1;j--) {
            a[k][y] = a[k][y-1] + a[k-1][y] - a[k-1][y-1] + (cnt*cnt);
            map_[cnt]=a[k][y];
            cnt++;
            k--; y++;
            if(cnt>1e6) break;
        }
        if(cnt>1e6) break;
    }
 
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