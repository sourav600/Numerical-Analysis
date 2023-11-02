#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define pi acos(-1)
#define ll long long
#define For(i,n) for(ll i=0; i<n; i++)
#define all(x) x.begin(), x.end()
#define ordered_set tree<pair<int,int>, null_type,less<pair<int,int> >, rb_tree_tag,tree_order_statistics_node_update>

typedef unsigned long long  ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vl;
typedef vector<pii> vpi;
typedef vector<pll> vpl;
const ll M = 1e9 + 7;
const ll N = 2e5 + 10;
vector<pair<int,int> > movements = { {+1,0},{-1,0},{0,+1},{0,-1} };
ll mod(ll a){ return ((a%M)+M)%M;}

#define func(x) 1/(1+x*x)

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    float sum=0.0, a,b,h,n,x;

    //cout<<"Enter the limit a,b: ";
    cin>>a>>b;
    //cout<<"Enter the number of interval : ";
    cin>>n;

    h = (b-a)/n;
    sum = func(a) + func(b);
    for(int i=1; i<n; ++i){
        x = (a + (i*h));
        sum += (2*func(x));
    }

    cout<<(h/2)*sum<<nl;



return 0;
}



