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
 

 ll grid[1002][1002];
 
int dfs(int n,int m, int row, int col, set<pair<int, int>>& visited) {
    if (row < 0 || col < 0 || row >= n || col >= m || visited.count({row, col}) || grid[row][col] == 0) {
        return 0;
    }
    visited.insert({row, col});
    int size = grid[row][col];
    size += dfs(n,m, row+1, col, visited);
    size += dfs(n,m, row-1, col, visited);
    size += dfs(n,m, row, col+1, visited);
    size += dfs(n,m, row, col-1, visited);
    return size;
}

void solve(){
      ll n , m ;
      cin >> n >> m ;
    set<pair<int, int>> visited;
      f(i,0,n){
        f(j,0,m){
            grid[i][j]=0;
        }
      } 
      
      f(i,0,n){
        f(j,0,m){
            cin >> grid[i][j];
        }
      } 
      vector<int> largest_sizes;
      f(i,0,n){
        f(j,0,m){
            int size = dfs(n,m, i, j, visited);
            largest_sizes.push_back(size);
        }
      } 
      sort(largest_sizes.rbegin(), largest_sizes.rend());
      cout << largest_sizes[0] << endl;

    
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