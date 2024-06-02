#include <bits/stdc++.h>

using namespace std;

int main(){
    
    char S[100];

    cin>>S;

    for (int i=0; i<strlen(S); i++)
    {
        if(S[i]>64 && S[i]<91){
            cout<<(i+1)<<endl;
        }
    }
   
    
    return 0;
}