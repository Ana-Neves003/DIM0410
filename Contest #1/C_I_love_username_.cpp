#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, result_max = 0, result_min = 0, cont = 0;
    cin>>n;
    int vetor[n];

    for (int i = 0; i < n; i++)
    {
        cin>>vetor[i];
        if(vetor[i]> result_max){
            result_max = vetor[i];
            if(i==0)
                result_min = vetor[i];
            if(i>0)
                cont++;
        }
        if(vetor[i]< result_min){
            result_min = vetor[i];
            if(i>0)
                cont++;
        }
            
    }
    
    cout<<cont<<endl;

    return 0;
}