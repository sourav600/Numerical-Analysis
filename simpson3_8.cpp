#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define func(x) 1/(1+x*x)

int main(){
    float sum=0.0, a,b,h,n,x;
    //cout<<"Enter the limit a,b: ";
    cin>>a>>b;
    //cout<<"Enter the number of interval : ";
    cin>>n;

    h = (b-a)/n;
    sum = func(a) + func(b);
    for(int i=1; i<n; ++i){
        x = (a + (i*h));

        if(i%3) sum += (3*func(x));
        else sum += (2*func(x));
    }
    cout<<((3*h)/8)*sum<<nl;

return 0;
}



