#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, total = 100, resultado = 100, i = 0;
    cin>>N;

    int vetor[N];


    while(i<N){
        cin>>vetor[i];
        total += vetor[i];
        if(total>resultado)
            resultado = total;
        i++;
    }

    cout<<resultado<<endl;


    return 0;
}