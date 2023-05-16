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
 
 
 
 
void solve(){
    
   ll n ,t ;
   cin >> n >> t ;
   vector<ll> a(n) , b(n) ;
   f(i,0,n){
    cin >> a[i];
   }
   f(i,0,n){
    cin >> b[i];
   }
   
   ll ans=-1 ,mx=0;
   f(i,0,n){
    if(a[i]+i<=t && b[i]>mx){
        ans=i+1;
        mx=b[i];
 
    }
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