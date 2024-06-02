#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,x,v;
    cin>>n>>x;

    set<int>v[n];

    for(int i=0;i<n;i++){
        cin>>v;
        v.insert(v);
    }
    int i = 0; j = N;

    while(i<j){
        if(v[i] > x || v[i] == x)
            i++;
        else{
            if(v[i] - v[i-1] == 0)
                cout<<v[i-1]<<" "<<v[i]<<endl;
            else
            j--;
        }

    }

    return 0;
}