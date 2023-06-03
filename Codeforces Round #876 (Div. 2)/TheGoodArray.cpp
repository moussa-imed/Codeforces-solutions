#include <bits/stdc++.h>
#include <iostream>
 
#define endl '\n'
#define f(i,s,k) for(ll i=s;i<k;i++)
#define f1(i,n,s) for(ll i=n;i>=s;i--)
#define pb push_back
#define fi first
#define se second
 
typedef long long  ll;
 
 
const int N =1e5+100;
const ll MOD = 1e9+7 ;
const double Pi=acos(-1);
 
 
using namespace std;
 
 
 
 
void solve(){
    
    ll n , k ;
    cin >> n >> k ;
    //cout <<n << endl;
    if(n%k==0 & k>1){
        cout << n/k +1 << endl;
    }else{
       // cout << "ahla" << endl;
        cout << n/k + 1*(n%k==1)+2*(n%k>1)<< endl;
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