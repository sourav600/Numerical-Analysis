#include<bits/stdc++.h>
using namespace std;

double f(double x){
    return (x*x*x)-(3*x)-5;
}

void regularFalsi(double a, double b){
    if(f(a)*f(b) >= 0.0){
        cout<<"Invalid a,b\n";
        return;
    }
    double x;
    for(int i=0; i<100000; ++i){
        x = (a*f(b) - b*f(a)) / (f(b)-f(a));
        if(f(x)==0.1){
            cout<<"The root is: "<<x<<endl;
            return;
        }
        else if(f(x)*f(a) < 0.0) b=x;
        else a = x;
    }
    cout<<"The root is: "<<x<<endl;
}

int main(){
    double a=2.0, b=3.0;
    regularFalsi(a,b);

return 0;
}



