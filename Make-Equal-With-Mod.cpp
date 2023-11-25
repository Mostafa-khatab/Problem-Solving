#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define loop(n) for(int i = 0; i < n; ++i)
#define loopj(n) for(int j = 0; j < n; ++j)
#define sz(x) (int)(x).size()
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define ld long double
#define fs first
#define sc second
#define no cout<<"NO"<<nl
#define yes cout<<"YES"<<nl
#define ones(n) __builtin_popcount(n)
double pi = std::acos(-1.0);
#define oo 0x3f3f3f3fLL
#define INF 0x3f3f3f3f3f3f3f3fLL
const int M=1e9+7;
#define nl '\n'
const ll N = 1e6+7;
ll gcd(ll x, ll y) { return(!y ? x : gcd(y, x % y)); }
ll lcm(ll x, ll y) { return x / gcd(x, y) * y; }
int dx[]{ 1, -1, 0, 0, 1, 1, -1, -1 };
int dy[]{ 0, 0, 1, -1, 1, -1, 1, -1 };
void doWork() {
    int n;
    cin>>n;
    vector<int>v(n);
    loop(n)cin>>v[i];
    sort(all(v));
    bool one=false,eq=true;
    for(int i=1;i<n;i++){
        if(v[i]-v[i-1]==1)eq=false;
        if(v[i]==1)one=true;
    }
    if((v[0]==1||one)&&!eq){
        no;
    }
    else{
        yes;
    }
}
int main() {
//    freopen("plants.in","r",stdin);
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    cin.tie(0)->sync_with_stdio(0);
    int t=1;
    cin>>t;
    int cnt = 1;
    while(t--){
        doWork();
//        cout << "Case " << "#" << cnt++ << ": ";

    }

}
