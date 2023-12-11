#include<bits/stdc++.h>
using namespace std;

#define nl '\n'

#define func(x) 1/(1+x*x)

int main(){

    float  a,b,h,n,x;

    //cout<<"Enter the limit a,b: ";
    cin>>a>>b;
    //cout<<"Enter the number of interval : ";
    cin>>n;

    h = (b-a)/n;
    float sum = func(a) + func(b);
    for(int i=1; i<n; ++i){
        x = (a + (i*h));
        sum += (2*func(x));
    }

    cout<<(h/2)*sum<<nl;



return 0;
}



