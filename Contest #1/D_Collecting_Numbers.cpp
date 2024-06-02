#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, ind, cont = 1;
    cin>>n;

    vector<int> v(100);

    for (int i = 0; i < n; ++i)
    {
        cin>>ind;
        v[ind] = i;
    }

    for (int i = 1; i < n; ++i)
    {
        if(v[ind] > v[ind+1])
            cont++;
    }
    cout<<cont++<<endl;
    
    
    /*
    int n; 
    cin>>n;
    int l = 1;
    int ind[n+1] = {0};
    for (int i = 1; i <= n; i++) {
    	int x; 
        cin>>x;
    	ind[x] = i;
        //cout<<"Valor = "<<x<<" com indice ["<<ind[x]<<"] "<<endl;
    }
    int c = 1;
    for (int i = 1; i <= n; i++) {
    	if (l > ind[i]){
            c++;
            //cout<<"Valor do ultimo numero = "<<l<<" eh maior que o valor do numero = "<<ind[i]<<endl;
        } 
    	l = ind[i];
        //cout<<"O maior valor foi trocado, valor = "<<ind[i]<<endl;
    }
    cout<<c;

*/

/*
   int n;
   cin>>n;
   vector<int> numeros(n);
   vector<int> posicaoDosNumeros(n);


    for (int i = 0; i < n; i++)
    {
        cin>>numeros[i];
        numeros[i]--;
        posicaoDosNumeros[numeros[i]] = i;
    }
    int rounds = 1;
    for (int i = 1; i < n; i++)
    {
       if(posicaoDosNumeros[i] < posicaoDosNumeros[i-1]){
            rounds++;
       }
    }

    cout<<rounds<<endl;
*/
    
    return 0;
}