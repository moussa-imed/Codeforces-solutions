#include <bits/stdc++.h>
 
#define f(i,s,n) for(int i=s;i<n;i++)
#define f1(i,n,s) for(int i=n;i>=s;i--)
#define pb push_back
#define fi first
#define se second
 
typedef long long ll;
 
const int INF = 4e5+5;
 
const int N = 1e5+5;
const int MOD = 998244353  ;
 
using namespace std;
int n,m;
vector<int> dist(N,INF);
int vis[N];
int v1[N];
vector<int> gr[N];
int i=0;
int mx=0;
void dfs(int v){
    if(vis[v]){
        return ;
    }
    if(v<0 || v>n){
        return ;
    }
    vis[v]=1;
    mx=0;
    //cout << "v :"<< v << endl ;
    f(i,0,gr[v].size()){
        if(!vis[gr[v][i]] && gr[v][i]> mx ){
            mx=gr[v][i];
            //cout << "mx : "<<mx<< endl ;
        }
    }
    remove(gr[v].begin(), gr[v].end(),mx);
    v1[i]=v;
    i++;
    dfs(mx);
 
}
 
void solve(){
 
    cin>>n;
    //fill(v1.begin(),v1.end(),0);
    i=0;
    f(i,0,n){
        //cout << "vis "<< i <<" : "<< vis[i]<< endl ;
        gr[i].clear();
        vis[i]=0;
    }
 
    f(i,1,n){
        //cout << "i :"<< i << endl ;
        gr[(2*i+1)%n].pb(i);
        gr[(2*i)%n].pb(i);
       // cout<<"ahla";
    }
 
    dfs(0);
 
 
    f1(i,n-1,0){
        if(v1[i]%2==0){
            cout <<0;
        }else{
            cout<< 1;
        }
    }
    cout<< endl ;
}
 
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    freopen("unique.in","r",stdin);
    int t=1;
    cin >> t ;
    while(t--){
 
        solve();
    }
    return 0;
}