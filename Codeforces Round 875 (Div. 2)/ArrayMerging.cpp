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
    
    
    ll n,x, mx=0;
    cin >> n ;
    map<ll,ll> m,m1;
    vector<ll> a,b;
    f(i,0,n){
        cin >> x ;
        a.pb(x);
        
 
    }
    f(i,0,n){
        cin >> x ;
        b.pb(x);     
    }
    ll c=1;
    f(i,1,n){
        c++;
        if(i==n-1 && a[i]==a[i-1] ){
 
            m[a[i]]=max(m[a[i]],c);
        }
        if(i==n-1 && a[i]!=a[i-1] ){
 
            m[a[i]]=max(m[a[i]],(ll)1);
        }
        if(a[i]!=a[i-1]){
            m[a[i-1]]=max(m[a[i-1]],c-1);
            c=1;
        }
 
 
    }
    c=1;
    f(i,1,n){
        c++;
        if(i==n-1 &&b[i]==b[i-1] ){
            
            m1[b[i]]=max(m1[b[i]],c);
        }if(i==n-1 &&b[i]!=b[i-1] ){
            
            m1[b[i]]=max(m1[b[i]],(ll)1);
        }
        if(b[i]!=b[i-1]){
            m1[b[i-1]]=max(m1[b[i-1]],c-1);
            c=1;
        }
 
    }
    if(n==1){
        if(a[0]==b[0]){
            cout << 2 << endl;
        }else{
            cout << 1 << endl;
        }
 
    }else{
        for(auto y:a){
            mx=max(mx,m[y]+m1[y]);
        }
        for(auto y:b){
            mx=max(mx,m[y]+m1[y]);        
        }
       
        cout << mx << endl;
 
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