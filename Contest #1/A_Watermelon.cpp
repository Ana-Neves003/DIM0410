#include <bits/stdc++.h>

using namespace std;

int main(){
    int w;
    cin>>w;

    if(w>2 && (w-2)%2 == 0 && w<= 100)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}