#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> v, int k, int index){
    if(v.size()==1){
        cout<<v[0]<<endl;
        return;
    }
    index=(index+k)%v.size();
    v.erase(v.begin()+index);
    solve(v,k,index);
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v;
    for(int i=1;i<=n;i++){
        v.push_back(i);
    }
    int index=0;
    solve(v,k-1,index);
    return 0;

}