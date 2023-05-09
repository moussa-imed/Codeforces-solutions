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
 
 
int find(ll n,ll m){
    if(n==m) return 1;

    if(n<m) return 0;

    if(n%3!=0){
        return 0;
    } 
    else{
        return find(n/3,m)+find(2*(n/3),m);
    }
}
 
void solve(){
        
    ll n ,m;
    cin >> n >> m ;
    if(find(n,m)>=1){
        cout << "yes"<<endl;
    }else{
        cout <<"no"<<endl;
    }
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