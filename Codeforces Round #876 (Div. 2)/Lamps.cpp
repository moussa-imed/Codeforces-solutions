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
 
vector<ll> a[N];
 
 
void solve(){
 
    
    ll n ;
    map<ll,ll> m;
    cin >> n ;
    f(i,1,n+1){
        a[i].clear();
    }
    ll x , y ;
    f(i,0,n){
        cin>> x >> y;
        a[x].pb(y);
        m[x]=1;
    }
    ll sum=0;
    
    f(i,1,n+1){
        sort(a[i].rbegin(), a[i].rend());
        if(m[i]){
            //cout << i << endl;
 
            f(j,0,min(i,(ll)a[i].size())){
                sum+=a[i][j];
                //cout << a[i][j] << endl;
                //cout << a[i][j] << endl;
            }
        }
        
 
    }
    //cout << a[1][0] <<endl; 
    cout << sum << endl;
 
    
 
 
    
 
    
 
 
    
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
