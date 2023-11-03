#include<bits/stdc++.h>
using namespace std;

int dp[100];
int fact(int n){
    if(dp[n]!=0) return dp[n];
    if(n==0) return 1;
    return dp[n] = n*fact(n-1);
}

int main(){
    int n; 
    cout<<"Enter the length of array: ";
    cin>>n;
    float x[n+1], fx[n+1][n+1];
    cout<<"Enter x values: ";
    for(int i=0; i<n; ++i) cin>>x[i];

    cout<<"Enter f(x) values: ";
    for(int i=0; i<n;++i){
        cin>>fx[i][0];
    }
    cout<<"Enter the point: ";
    float a; cin>>a;

    //Make difference Table
    for(int i=1; i<n; ++i){
        for(int j=i; j<=n-1; ++j){
            fx[j][i] = fx[j][i-1] - fx[j-1][i-1];
        }
    }
    cout<<"Difference Table: \n";
    int k=0;
    for(int i=0; i<n; ++i){
        for(int j=0; j<=k; ++j) cout<<fx[i][j]<<"\t";
        ++k;
        cout<<endl;
    }

    float h = x[1]-x[0];
    float u = (a-x[0]) / h;
    float ans = fx[0][0], coefficient = 1;
    int it = 0;
    for(int i=1; i<n; ++i){
        coefficient *= (u-it);
        it++; 
        ans += (coefficient/fact(i)) * fx[i][i];
    }
    cout<<"Forward Interpolation with equal interval result: "<<ans<<endl;
return 0;
}