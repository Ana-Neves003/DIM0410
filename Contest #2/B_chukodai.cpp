#include <bits/stdc++.h>

using namespace std;

int main(){

    string S;
    int a,b;
    char pos_a,pos_b,aux;

    cin>>S;
    cin>>a>>b;



    for(int i=0; i<S.size(); i++){
        if(i+1 == a)
            pos_a = S[i];
        if(i+1 == b)
            pos_b = S[i];
    }

    for(int i=0; i<S.size(); i++){
        if(i+1 == a){
            aux = S[i];
            S[i] = pos_b;
        }
        if(i+1 == b){
            S[i] = aux;
        }

        cout<<S[i];
    }

    cout<<endl;

    return 0;
}