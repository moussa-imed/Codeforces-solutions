#include <bits/stdc++.h>

#define endl '\n'
#define f(i,s,n) for(int i=s;i<n;i++)
#define f1(i,n,s) for(int i=n;i>=s;i--)
#define pb push_back
#define fi first
#define se second

typedef long long ll;

const ll INF = 4e6+5;

const int N = 1e9 + 5;
const int MOD = 998244353  ;

using namespace std;

map<int,int> m;
void solve()
{
     ll n,res=0 ;
     //cin >> n ;
     ll cnt=1,cnt1=0;
     bool test =true;
     while(res<N){
       // cout << "res : "<< res << " cnt :"<< cnt-1 << endl ;
        if((cnt1%2)==1){
                //cout << "ahla "<< endl;
                res+=(2*cnt1);
                cnt++;
                test=false;
                cnt1++;
        }
        else if((cnt1%2==0) && test==true){
            res+=(2*cnt1);
            cnt++;
            cnt1++;
            //cout << "ahla true"<< endl;
        }else if((cnt1%2)==0 && test==false)
            {
            res+=(2*cnt1);
            cnt++;
            test=true;
            //cout << "ahla f"<< endl;
            }
            m[res]=cnt;
     }
     //cout << "res : "<< res << " cnt :"<< cnt-1 << endl ;
     //cout << (double)(9/11)*((-4/3)+sqrt((4/3)*(4/3)+(44*n)/18) )<< endl;
     //cout << cnt-1<< endl ;
}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t=1;
    solve();
    cin >> t ;
    while(t--){
        ll n ;
        cin >> n ;
        auto it=m.lower_bound(n);
        cout << (*it).second-1 << endl ;
    }
    return 0;
}