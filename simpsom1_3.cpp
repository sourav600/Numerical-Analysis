#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define func(x) 1/(1+x*x)

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif
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

        if(i%2) sum += (4*func(x));
        else sum += (2*func(x));
    }
    cout<<(h/3)*sum<<nl;
return 0;
}



