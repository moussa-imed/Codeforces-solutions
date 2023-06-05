
typedef long long  ll;
 
 
const int N =2e5+100;
const ll MOD = 1e9+7 ;
const double Pi=acos(-1);
 
 
using namespace std;
 
vector<ll> a[N];
 
 
void solve(){
 
    
    ll n , q ;
    cin >> n >> q ;
    string s ;
    cin >> s ;
    set<ll> a ;
    f(i,1,n+1){
        if(i%2==0 && s[i-1]=='(') a.insert(i);
        if(i%2==1 && s[i-1]==')') a.insert(i);
    }
    ll x ;
    while(q--){
        cin >> x ; 
 
        if(a.count(x)) a.erase(x);
        else a.insert(x);
 
        if(n%2) cout << "NO"  << endl;
        else if(a.size() &&  (*a.begin() % 2 || !(*a.rbegin() % 2)) ) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    
 
    
    
 
 
    
 
    
 
 
    
}
   
 
 
 
 
 
int main(){
 
    
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int qt=1;
    
 
    //cin >> qt ;
 
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