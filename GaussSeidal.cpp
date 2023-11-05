#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"ENter the number of unknowns / Array size: ";
    int n; cin>>n;
    float a[n][n+1], b[n][n+1], m[n],ans[n];

    cout<<"Enter all equations coefficient: \n";
    for(int i=0; i<n; ++i){
        for(int j=0; j<n+1; ++j) cin>> a[i][j];
    }
    //rearrange the given array / eqauation
    for(int i=0; i<n; ++i){
        int mx=INT_MIN, pos=-1;
        for(int j=0; j<n; ++j){
            if(mx<abs(a[i][j])){
                mx = abs(a[i][j]);
                pos = j;
            }
        }
        //put the rearranged array into a new array
        for(int k=0; k<n+1; ++k) b[pos][k] = a[i][k];
    }

    cout<<"Rearranged array: \n";
    for(int i=0; i<n; ++i){
        for(int j=0; j<n+1; ++j) cout<<b[i][j]<<" ";
        cout<<endl;
    }
    //initial value of x,y,z
    for(int i=0; i<n;++i) m[i]=0;

    cout<<"Enter the number of iteration: ";
    int k, it=1; cin>>k;
    while(k--){
        cout<<"Iteration "<<it++<<": \n";
        //n-th approximation
        for(int i=0; i<n; ++i){
            m[i] = b[i][n];
            for(int j=0; j<n; ++j){
                if(i==j) continue;
                m[i] -= (b[i][j]*m[j]);
            }
            m[i] /= b[i][i];
        }
        for(int i=0; i<n; ++i) cout<<m[i]<<" ";
        cout<<endl;
    }
    
    


    return 0;
}