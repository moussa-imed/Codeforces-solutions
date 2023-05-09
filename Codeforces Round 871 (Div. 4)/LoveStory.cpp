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
 
 
 
 
void solve(){
        
    string s,s1;
    s="codeforces";
    ll c=0;
    cin >> s1;
    f(i,0,10){
        if(s[i]!=s1[i]) c++;
    }  
    cout << c <<endl;  
    
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
 