#include<bits/stdc++.h>
using namespace std;

double f(double x) {
    return (x*x*x*x)-x-10;
}
double f1(double x) {
    return (3*x*x*x)-1;
}

void newtonRepson(double a){
    double h = f(a) / f1(a);
    while(abs(h) >= 0.01){
        h = f(a) / f1(a);

        a = a-h;
    }
    cout<<"The root is: "<<a<<endl;
}
int main(){
    int n;
    cout<<"Input the approximate value of root: ";
    cin>>n;
    newtonRepson(n);
return 0;
}



