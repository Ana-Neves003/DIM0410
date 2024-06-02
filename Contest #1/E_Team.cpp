#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>v(n);
    int cont1 = 0, cont2 = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>v[j];
            if(v[j] == 1)
                cont1++;
        }
        if(cont1>1)
            cont2++;
        cont1 = 0;  
    }

    cout<<cont2<<endl;
    

    return 0;
}