#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x;
    cin>>n;

    set<int> v;

    for (int i = 0; i < n; i++)
    {
        cin>>x;
        v.insert(x);
    }

    cout<<v.size()<<endl;
    
    return 0;
}