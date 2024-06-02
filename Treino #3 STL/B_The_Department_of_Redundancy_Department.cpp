#include <bits/stdc++.h>

using namespace std;

int main(){
   // int n;
   // cin>>n;

    map<int,int> map;
    set<int> s1;

    for (int i = 0; i < 10; i++)
    {
        int valor;
        cin>>valor;
        s1.insert(valor);
    }

    for (auto it = s1.begin(); it != s1.end() ; it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;
}