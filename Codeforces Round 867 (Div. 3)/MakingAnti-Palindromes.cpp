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
    
    ll n ,mx=0,mx1=0,k=0;
    string s ;
    map<char,ll> cnt,cnt1; 
    cin >> n ;
    cin >> s ;
 
    f(i,0,n){
        if(s[i]==s[n-i-1] && i< n/2 ){
            k++;
            cnt[s[i]]++;
            mx=max(cnt[s[i]],mx);
        }
            
        cnt1[s[i]]++;
        mx1=max(cnt1[s[i]],mx1);
    }
    if(n%2==1){
        cout << -1 << endl;
    }else if(mx1>(n/2)){
        cout << -1 << endl;
    }else{
        cout << max(mx,(k+1)/2) << endl;
    }
 
 
    
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