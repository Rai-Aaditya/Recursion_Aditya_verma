#include<bits/stdc++.h>
using namespace std;

void insert(vector<int> &v, int t){
    if(v.size()==0 || v[v.size()-1]<=t)
    {
        v.push_back(t);
        return;
    }
    int k=v[v.size()-1];
    v.pop_back();
    insert(v,t);
    v.push_back(k);
}

void sortArray(vector<int> &v){
    if(v.size()==1)
        return;
    int temp=v[v.size()-1];
    v.pop_back();
    sortArray(v);
    insert(v,temp);
}
int main(){
    int n;
    cout<<"Enter size of array";
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sortArray(v);
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    return 0;
}