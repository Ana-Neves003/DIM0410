#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, cont = 0;
    cin>>n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        if(v[i] != v[i-1] && v[i] > v[i-1])
            cont++;
    }
    
    return 0;
}