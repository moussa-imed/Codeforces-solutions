#include <bits/stdc++.h>
#include <iostream>
 
#define endl '\n'
#define f(i,s,k) for(ll i=s;i<k;i++)
#define f1(i,n,s) for(ll i=n;i>=s;i--)
#define pb push_back
#define fi first
#define se second
 
typedef long long  ll;
 
 
const int N =2e5+100;
const ll MOD = 1e9+7 ;
const double Pi=acos(-1);
 
 
using namespace std;
 

 
 
void solve(){

    
    ll n ;
    map<ll,ll> m;
    vector<ll> a;
    cin >> n ;
    ll x;
    f(i,0,n){
        cin >> x ;
        a.pb(x);
    }

    if(a[n-1]==1){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
        vector<ll> s ;
        ll aux=0;
        f(i,0,n){
            aux++;
            if(a[i]==0){
                s.pb(aux);
                aux=0;
            }
            //cout << aux << endl;
        }
        // Reverse the vector
        reverse(s.begin(), s.end());
        for(auto y:s){
            //cout << y << endl ;
            f(i,0,y-1) cout << 0 << " " ;
            cout << y-1 << " " ;
        }
        cout << endl;
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