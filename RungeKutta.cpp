#include<bits/stdc++.h>
using namespace std;

double f(double x, double y){
    return (x-y)/2;
}
int main(){
    double x0, y0, x, n;
    cout<<"Enter the value of x0 and y0: "; //x0=1, y0=1.2
    cin>>x0>>y0;
    cout<<"Enter the point of calculation: "; //x = 1.05
    cin>>x;
    cout<<"Enter the number of step: "; //n=5
    cin>>n;

    double h = (x-x0)/n;
    cout<<h<<endl;
    double k1,k2,k3,k4, ans=y0;
    cout<<"x0\ty0\t\tyn\n";
    for(int i=0; i<n; ++i){
        k1 = h*(f(x0,y0));
        k2 = h*(f((x0+h/2.0), (y0+k1/2.0)));
        k3 = h*(f((x0+h/2.0), (y0+k2/2.0)));
        k4 = h*f(x0+h, y0+k3);

        ans += (k1+(2*k2)+(2*k3)+k4)/6.0;
        cout<<x0<<"\t"<<y0<<"\t\t"<<ans<<endl;
        x0 = x0+h;
        y0 = ans;
    }
    cout<<"Y= "<<ans<<" at point "<<x<<endl;
    return 0;
}