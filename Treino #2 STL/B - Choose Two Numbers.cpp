#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, tam;
    cin>>a;

    vector<int> va(a);
    for (int i = 0; i < a; i++)
    {
        cin>>va[i];
    }

    sort(va.begin(), va.end(), greater<int>());

    /*
    for(auto x:va)
        cout<<x<<" ";
    */
    
    cin>>b;
    vector<int> vb(b);
    for (int i = 0; i < b; i++)
    {
        cin>>vb[i];
    }
    sort(vb.begin(), vb.end(), greater<int>());

    return 0;
}