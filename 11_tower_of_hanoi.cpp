#include<bits/stdc++.h>
using namespace std;
void solve(int s, int d, int h, int n){
    if(n==1){
        cout<<"Move disc from "<<s<<" to "<<d<<endl;
        return;
    }
    solve(s,h,d,n-1);
    cout<<"Move disc from "<<s<<" to "<<d<<endl;
    solve(h,d,s,n-1);
    
}
int main(){
    int n;
    cin>>n;
    solve(1,3,2,n);
    return 0;
}