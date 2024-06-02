#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int>n(8);
    int t = 0;

    for (int i = 0; i < 8; i++)
    {
        cin>>n[i];
        if(n[i] < 0 || n[i] > 8){
            cout<<"F"<<endl;
            return 0;
        }
    }

    for (int i = 0; i < 8; i++)
    {
        if(n[i] != 0 && n[i] != 1)
            t++;
    }

    if(t == 0)
        cout<<"S"<<endl;
    else
        cout<<"F"<<endl;

    return 0;
}