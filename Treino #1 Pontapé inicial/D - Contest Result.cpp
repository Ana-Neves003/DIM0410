#include <bits/stdc++.h>


using namespace std;

int main(){

    int n,m,soma=0;

    cin>>n>>m;

    vector<int> problema(n);

    for (int i = 0; i<n; i++)
    {
        cin>>problema[i];
       // cout<<"Problema: "<<problema[i]<<" Posicao: "<<i<<endl;
    }

    vector<int> problemaResolvido(m);

    for(int i = 0; i < m; i++){
        cin>>problemaResolvido[i];
        soma += problema[problemaResolvido[i]-1];
    }    

    cout<<soma<<endl;
    
    return 0;
}