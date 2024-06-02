#include <bits/stdc++.h>

using namespace std;

int main(){

    int N, cont = 0, i = 0;
    cin>>N;
    char vetor[N];

    while(i<N){
        cin>>vetor[i];
        if(i>0 && vetor[i] != 'a' && vetor[i-1] == 'a'){
            if(vetor[i-1] == 'a' && vetor[i-2] == 'a')
                cont++;
        }
        if (i+1 == N && vetor[i] == 'a' && vetor[i-1] == 'a')
            cont+=2;
        else if(vetor[i] == 'a' && vetor[i-1] == 'a')
            cont++;
        //cout<<cont<<endl;
        i++;
    }
    
    cout<<cont<<endl;

    return 0;
}