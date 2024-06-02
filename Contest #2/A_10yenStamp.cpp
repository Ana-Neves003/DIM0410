#include <bits/stdc++.h>

using namespace std;

int main(){
    int X,Y, cont = 0;

    cin>>X>>Y;

    Y -= X;
    while(Y>0){
        cont++;
        Y-=10;
    }

    cout<<cont<<endl;

    return 0;
}