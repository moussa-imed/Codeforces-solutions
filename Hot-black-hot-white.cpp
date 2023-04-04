#include <bits/stdc++.h>

#define endl '\n'
#define f(i,s,n) for(int i=s;i<n;i++)
#define f1(i,n,s) for(int i=n;i>=s;i--)
#define pb push_back
#define fi first
#define se second

typedef long long ll;

const ll INF = 4e9+5;

const int N =1e5+7;
const int MOD = 1e9+7  ;
using namespace std;
ll pi=3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;

int mul(const int& a, const int& b){ return 1ll*a*b%MOD; } //
    int add(const int& a, const int& b){ return (a+b>=MOD)?a+b-MOD:a+b; }
    int sub(const int& a, const int& b){ return (a-b<0)?a-b+MOD:a-b; }
    int inv(int x){
        int res = 1, y = MOD-2;
        while(y>0){
            if(y&1) res = mul(res,x);
            y >>= 1, x = mul(x,x);
        }
            return res;
    }
    int power(int x,  int y) //power(x,y)%MOD
    {
        if (y == 0)
            return 1;
        int p = power(x, y / 2) % MOD;
        p = (p * p) % MOD;

    return (y % 2 == 0) ? p : (x * p) % MOD;
}




void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for (ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll b[n];
    ll cnt[3];
    memset(cnt,0,sizeof(cnt));
    for (ll i=0;i<n;i++){
        b[i]=a[i]%3;
        cnt[b[i]]++;
    }
    ll res[n];
    ll tot=0;
    if (cnt[0]<=n/2){
        cout<<0<<endl;
        for (ll i=0;i<n;i++){
            if (b[i]==0){
                res[i]=1;
                tot++;}
            else{
                res[i]=0;
            }
        }
        ll i=0;
        while (tot<n/2){
            if (res[i]==0){
                res[i]=1;
                tot++;
            }
            i++;
        }
        for (ll i=0;i<n;i++){
            cout<<res[i];
        }
    }
    else if(cnt[1]+cnt[2]<=n/2){
        cout<<2<<endl;
        for (ll i=0;i<n;i++){
            if (b[i]==1 || b[i]==2){
                res[i]=1;
                tot++;}
            else{
                res[i]=0;
            }
        }
        ll i=0;
        while (tot<n/2){
            if (res[i]==0){
                res[i]=1;
                tot++;
            }
            i++;
        }
        for (ll i=0;i<n;i++){
            cout<<res[i];
        }
    }
    else{
        cout<<-1<<endl;
    }
}





int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.precision(30);
    //freopen("army.in","r",stdin);
    int t=1;
   // cin>>t;
    for(int i=0;i<t;i++){
            solve();
    }
return 0;
}